#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1000000007;
const ll mod2=998244353;
const double PI = 3.14159265358979323846;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define fo(i ,n) for(ll i = 0 ; i < n ; i++)
#define rep(i,n) for(ll i=1;i<=n;i++)
#define mp make_pair
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define pb push_back
#define vi vector<ll>
#ifndef ONLINE_JUDGE
  #include "debug.h"
#else
#define deb(...)
#endif
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n;i++){
        int d;
        cin >> d;
        v.pb(d);
    }
    cout << 1 << endl;
}
int32_t main(){
    FAST;
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}