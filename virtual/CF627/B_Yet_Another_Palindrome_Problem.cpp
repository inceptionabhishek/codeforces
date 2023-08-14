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
    vector<int> v(n);
    fo(i,n){
        cin >> v[i];
    }
    vector<int> left(5001), right(5001);
    for (int i = 0; i < n;i++){
        right[v[i]]++;
    }
    for (int i = 0; i < n;i++){
        right[v[i]]--;
        for (int j = 0; j <= 5000;j++){
            if(left[j]>0 && right[j]>0){
                cout << "YES" << endl;
                return;
            }
        }
        left[v[i]]++;
    }
    cout << "NO" << endl;
}
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}