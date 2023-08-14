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
    ll xorv, sumv;
    cin >> xorv >> sumv;
    // a+b = a^b = 2*(a&b)
    ll diff = sumv - xorv;
    if(diff<0 || diff%2!=0){
        cout << -1 << endl;
        return;
    }
    if(xorv==0 && sumv==0){
        cout << 0 << endl;
        return;
    }
    if(xorv==sumv){
        cout << 1 << endl;
        cout << sumv << endl;
        return;
    }
    

}
int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}