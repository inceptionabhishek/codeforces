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
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    fo(i,n){
        cin >> a[i];
    }
    for (int i = 0; 1 < n; i++){
        a[i] %= k;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            ans.push_back(i + 1);
        }
    }
    auto cmp = [&](pair<int, int> a1, pair<int, int> b1) {
        if(a1.ff!=b1.ff){
            return a1.ff > b1.ff;
        }
        return a1.ss < b1.ss;
    };
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++){
        v[i].first = a[i];
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        if(i.ss==0){
            continue;
        }
        cout << i.second << " ";
    }
    cout << endl;
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

