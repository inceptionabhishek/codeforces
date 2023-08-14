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
    vector<ll> v(n);
    fo(i,n){
        cin >> v[i];
    }
    vector<ll> temp = v;
    sort(all(temp));
    int indexsm = 0, indexlg = n - 1;
    int l = 0, r = n - 1;
    int ok = 0;
    while(l<r && indexsm<indexlg){
        if(l==r || indexsm==indexlg){
            break;
        }
        if(v[l]==temp[indexsm]){
            l++;
            indexsm++;
        }else if(v[l]==temp[indexlg]){
            l++;
            indexlg--;
        }
        if(v[r]==temp[indexsm]){
            r++;
            indexsm++;
        }else if(v[r]==temp[indexlg]){
            r++;
            indexlg--;
        }
    }
    cout << l + 1 << ' ' << r + 1 << endl;
    // cout << -1 << endl;
}
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}