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
 
 
 
void solve() {
    int n;
	cin >> n;
	vector<string> grid(n);
	for (auto &i : grid) cin >> i;
 
	// In an n x n grid, any path from (0,0) to (n-1,n-1) is exactly 2n-1 chars long
	const int path_len = 2 * n - 1;
	string res;
	res += grid[0][0];
 
	// best_path[r][c] keeps track of which cells can
	// lead to the best lexicographical result
	vector<vector<bool>> best_path(n, vector<bool>(n));
	best_path[0][0] = true;
 
	// We process the grid diagonal by diagonal
	for (int i = 0; i < path_len - 1; i++) {
		char best = 'z';  // Initialize with max possible value
 
		// Pass 1: Look at all neighbors of cells currently marked as "best" to
		// find the smallest character available for the next step.
		for (int r = 0; r <= min(n - 1, i); r++) {
			int c = i - r;
			if (c >= n || !best_path[r][c]) continue;
 
			if (r + 1 < n) best = min(best, grid[r + 1][c]);  // Down
			if (c + 1 < n) best = min(best, grid[r][c + 1]);  // Right
		}
 
		res += best;
 
		// Pass 2: Now that we know the best character, we mark all cells on the next
		// diagonal (i + 1) that possess this character and are reachable.
		for (int r = 0; r <= min(n - 1, i); r++) {
			int c = i - r;
			if (c >= n || !best_path[r][c]) continue;
 
			if (r + 1 < n && grid[r + 1][c] == best) { best_path[r + 1][c] = true; }
			if (c + 1 < n && grid[r][c + 1] == best) { best_path[r][c + 1] = true; }
		}
	}
 
	cout << res << '\n';
}
 
 
int main() {
    solve();
}