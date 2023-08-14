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
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    fo(i,n){
        cin >> v1[i];
    }
    fo(i,n){
        cin >> v2[i];
    }
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        v[i] = v1[i] - v2[i];
    }
    sort(all(v));
    // fo(i,n){
    //     cout << v[i] << ' ';
    // }
    // cout << endl;
    ll ans = 0;
    int l = 0, r = n - 1;
    while(l<=r){
        if(v[l]+v[r]>0){
            ans += (r - l);
            r--;
        }else{
            l++;
        }
    }
    cout << ans << endl;
}
int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}