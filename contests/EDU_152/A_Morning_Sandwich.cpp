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

void solve() {
    ll b,c,h;
    cin >> b >> c >> h;
    ll ans = 0;
    bool ok = 0;
    while(true){
        if(ok==0){
            if(b==0){
                break;
            }else{
                b--;
            }
            ok = 1;
        }else{
            if(c==0 && h==0){
                break;
            }else{
                if(c>0){
                    c--;
                }else{
                    h--;
                }
            }
            ok = 0;
        }
        ans++;
    }
    if(ok==0){
        ans--;
    }
    cout << ans << endl;
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

