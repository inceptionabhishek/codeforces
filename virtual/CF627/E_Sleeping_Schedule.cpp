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
int dp[2001][2001];
int rec(int index,int time,int h,int l,int r,int n,vector<int>&a){
    if(index>=n){
        return 0;
    }
    if(dp[index][time]!=-1){
        return dp[index][time];
    }
    int ans = 0;
    int op1 = ((time + a[index]) % h >= l && (time + a[index]) % h <=r ) + rec(index + 1, (time + a[index]) % h,h, l, r, n, a);
    int op2 =  ((time + a[index]-1) % h >= l && (time + a[index]-1) % h <=r ) + rec(index + 1, (time + a[index]-1) % h,h, l, r, n, a);
    return dp[index][time]=max(op1, op2);
}
void solve(){
    int n, h, l, r;
    cin >> n >> h >> l >> r;
    vector<int> a(n);
    fo(i,n){
        cin >> a[i];
    }
    for (int i = 0; i <= 2000;i++){
        for (int j = 0; j <= 2000;j++){
            dp[i][j] = -1;
        }
    }
    int ans = rec(0, 0, h, l, r, n, a);
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