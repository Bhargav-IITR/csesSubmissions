#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define pii pair <long long, long long>  
class DSU{
    vector <int> parent, rank, size;
    
    public:
        DSU(int n){
            parent.resize(n+1);
            rank.resize(n+1, 0);
            size.resize(n+1, 1);
            for(int i = 0 ;i < n+1; i++) parent[i] = i;;            
        }

        int findParent(int u){
            if(parent[u] == u) return u;
            int p = findParent(parent[u]);
            return parent[u] = p;
        }

        void unionByRank(int u, int v){
            int upu = findParent(u);
            int upv = findParent(v);
            if(upu == upv) return;
            if(rank[upu] > rank[upv]){
                parent[upv] = upu;
            }else if(rank[upu] < rank[upv]){
                parent[upu] = upv;
            }else{
                parent[upu] = upv;
                rank[upv]++;
            }
        }

        void unionBySize(int u, int v){
            int upu = findParent(u);
            int upv = findParent(v);
            if(upu == upv) return;
            if(size[upu] > size[upv]){
                parent[upv] = upu;
                size[upu] += size[upv];
            }else if(size[upv] >= size[upu]){
                parent[upu] = upv;
                size[upv] += size[upu];
            }
        }

        int numComp(int zeroOrOneInd, int n){
            int ans = 0;
            int start = (zeroOrOneInd == 1)?1:0;
            int end = (zeroOrOneInd == 1)?n:n-1;
            for(int i = start ; i <= end ; i++){
                ans += (parent[i] == i);
            }
            return ans;
        }
};

// binary exponentiation recursive: 
int binExpRec(int a, int b){
    if(b == 0) return 1;
    int res = binExpRec(a, b/2);
    if(b&1) {
        return (a*(res*1ll*res)%M)%M;
    }
    else return (res*1ll*res)%M;
    // uses memory
}

int binExpIt(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*1ll*a)%M;
        }
        a = (a*1ll*a)%M;
        b >>= 1;
    }
    return ans;
}

int binMultiply(int a, int b){
    int ans = 0;
    while(b){
        ans = (ans + a)%M;
        a = (a+a)%M;
        b >>= 1;
    }
    return ans;
}

class FenwickTree {
public:
    vector<ll> bit;
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n + 1, 0); // 1-based indexing
    }

    // Update: add val at index -- O(log(n))
    void update(int index, ll val) {
        while (index <= n) {
            bit[index] = max(bit[index], val);
            index = getNext(index);
        }
    }

    // Get prefix sum [0...index] -- O(log(n))
    ll getMax(int index) {
        index = index + 1; // convert 0-based → 1-based
        ll ans = 0;
        while (index > 0) {
            ans = max(ans, bit[index]);
            index = getParent(index);
        }
        return ans;
    }

    // Build tree -- O(nlog(n))
    void build(vector<int> &input) {
        for (int i = 1; i <= n; i++) {
            update(i, input[i - 1]);
        }
    }

private:
    int getParent(int index) { // O(1)
        return index - (index & -index); // -index = 2s compliment
    }

    int getNext(int index) { // O(1)
        
        return index + (index & -index);
    }
};

vector <int> nextG(vector <int> &a){
    int n = a.size();
    stack <int> st;
    vector <int> nge(n);
    for(int i = n-1 ; i >= 0 ; i--){
        while(!st.empty() && (a[i] >= a[st.top()])) st.pop();
        if(st.empty()) nge[i] = n;
        else nge[i] = st.top();
        st.push(i);
    }
    return nge;
}

vector <int> prevG(vector <int> &a){
    int n = a.size();
    stack <int> st;
    vector <int> pge(n);
    for(int i = 0; i < n ; i++){
        while(!st.empty() && (a[i] >= a[st.top()])) st.pop();
        if(st.empty()) pge[i] = -1;
        else pge[i] = st.top();
        st.push(i);
    }
    return pge;
}

// ll dp[1000001][2];

// ll func(int lvl, int below, int n){ 
//     if(lvl == n-1) return 1;
//     ll ans = 0;
//     if(dp[lvl][below] != -1) return dp[lvl][below];
//     if(below){ // 1 means below 2 are separately trying to come up
//         // solve 5 cases : 
//         ans = (ans + 4*func(lvl+1, 1, n))%M;
//         ans = (ans + func(lvl+1, 0, n))%M; 
//     }else{
//         ans = (ans + 2*func(lvl+1, 0, n))%M;
//         ans = (ans + func(lvl+1, 1, n))%M;
//     }
//     return dp[lvl][below] = ans;
// }

const int MAXN = 1000000;
ll dp[MAXN + 1][2];

void precompute() {
    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= MAXN; i++) {
        dp[i][0] = (2 * dp[i - 1][0] + dp[i - 1][1]) % M;
        dp[i][1] = (dp[i - 1][0] + 4 * dp[i - 1][1]) % M;
    }
}

void solve() {
    int t;
    cin >> t;
    precompute();
    while(t--){
        int n;
        cin >> n;
        ll ans = (dp[n][0] + dp[n][1])%M;
        cout << ans << endl;
    }
}


int main() {
    solve();
}