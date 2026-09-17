#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define pii pair <long long, long long>  
 
long getMemoryUsageKB() {
    ifstream file("/proc/self/status");
    string line;
 
    while (getline(file, line)) {
        if (line.rfind("VmRSS:", 0) == 0) {
            stringstream ss(line);
            string key;
            long memory;
            ss >> key >> memory;
            return memory; // KB
        }
    }
 
    return -1;
}
 
 
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
 
/*
Fermet's theorem :
A^(M-1) congruent to 1 mod M , given : A and M are coprime -> used in finding MMI of A
where used ? -> to find (A/B)%M
(A/B)%M = (A*B^-1)%M;
        = (A%M * (B^-1)%M)%M
        --> TO FIND (B^-1)%M = MMI OF A with M.
ffermet's thm :
A^(M-1) cgrnt 1 mod M
=> A^(M-2) cngrnt A^-1 mod M
=> A^-1 = MMI OF A = (A^M-2)%M 
 
MMI RANGE 1 -> M-1
 
CODE : find A^M-2%M using binExp
*/
 
int MMI(int num){
    return binExpRec(num, M-2);
}
 
 
 
void solve(){
    ll n, x;
    cin >> n >> x;
    vector <ll> w(n);
    for(auto &it : w) cin >> it;
    vector <pair<ll, ll>> dp(1<<n, {1e18, 1e18}); // dp[mask] = {min ride, space left}
    dp[0] = {1, 0};
    for(ll mask = 1 ; mask < (1<<n) ; mask++){
        for(ll i = 0 ; i < n ; i++){
            if(mask&(1<<i)){
                pair <ll, ll> subOptimal = dp[mask^(1<<i)];
                if(subOptimal.second + w[i] <= x){
                    subOptimal.second += w[i];
                }else{
                    subOptimal.second = w[i];
                    subOptimal.first+=1;
                }
                dp[mask] = min(dp[mask], subOptimal);
            }
        }
    }
    cout << dp[(1<<n)-1].first << endl;
}   
 
int main() {
    solve();
}