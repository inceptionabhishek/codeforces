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
    string s;
    cin >> s;
    bool ok = 0;
    for(auto j:s){
        if(j=='R'){
            ok = 1;
        }
    }
    if(!ok){
        cout << s.length() + 1 << endl;
        return;
    }
    vector<int> v;
    v.pb(0);
    for (int i = 0; i < s.length();i++){
        if(s[i]=='R'){
            v.pb(i+1);
        }
    }
    v.pb(s.length()+1);
    int ans = -1;
    for (int i = 1; i < v.size();i++){
        ans = max(ans, v[i] - v[i - 1]);
    }
    cout << ans << endl;
}
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}