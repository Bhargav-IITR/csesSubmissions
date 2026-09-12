#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <cmath>
using namespace std;
#define ll long long 

int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    map <ll,pair<ll,ll>> mp;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(ll i = n-1 ; i >= 0 ; i--){
        for(ll j = i-1 ; j >= 0 ; j--){
            ll sum = a[i] + a[j];
            if(mp.find(x-sum) != mp.end()){
                cout << i+1 << " " << j+1 << " " << mp[x-sum].first+1 << " " << mp[x-sum].second+1 << endl;
                return 0;
            }
        }
        for(ll j = i+1 ; j < n ; j++) mp[a[i]+a[j]] = {i,j};
    }    
    cout << "IMPOSSIBLE" << endl;
}