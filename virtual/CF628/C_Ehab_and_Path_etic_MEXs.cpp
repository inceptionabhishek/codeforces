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
map<pair<int, int>, int> s;
int value = 0;
int n;
set<int> used;
void solve(){
    cin >> n;
    vector<int> adj[n+1];
    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        ans.pb(mp(u, v));
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int trinode=-1;
    for (int i = 0; i < n;i++){
        if(adj[i].size()>2){
            trinode = i;
            break;
        }
    }
    if(trinode==-1){
        for (int i = 0; i <= n - 2;i++){
            cout << i << endl;
        }
        return;
    }
    int lab = 0;
    for(auto j:adj[trinode]){
        s[{trinode, j}] = lab;
        s[{j, trinode}] = lab;
        lab++;
    }
    for (auto j:ans){
        if(s.count({j.ff,j.ss})||s.count({j.ss,j.ff})){
            cout << s[{j.ff, j.ss}] << endl;
        }else{
            cout << lab << endl;
            lab++;
        }
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