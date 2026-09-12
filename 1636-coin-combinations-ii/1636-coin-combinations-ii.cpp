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



int func(int sum, int id, vector <int> &a){
    int n = a.size();
    if(sum == 0) return 1;
    if(id == n) return 0;
    int notTake = func(sum, id+1, a);
    int take = 0;
    if(sum >= a[id]) take = func(sum-a[id], id, a);
    return ((take+notTake)%M);
}


void solve(){
    int n,x;
    cin >> n >> x;
    vector <int> a(n);
    for(auto &it : a) cin >> it;
    // int ans = func(x, 0, a);
    // cout << ans << endl;
    vector <vector <int>> dp(n+1,vector <int> (x+1, 0));
    for(int i = 0 ; i <= n ;i++) dp[i][0] = 1;

    vector <int> curr(x+1, 0);
    curr[0] = 1;

    for(int i = n-1 ; i >= 0 ; i--){
        vector <int> next(x+1, 0);
        next[0] = 1;
        for(int sum = 1 ; sum <= x ; sum++){
            int notTake = curr[sum];
            int take = 0;
            if(sum >= a[i]) take = next[sum-a[i]];
            next[sum] = ((take + notTake)%M);
        }
        curr = next;
    }
    cout << curr[x] << endl;
}

int main() {
    solve();
}