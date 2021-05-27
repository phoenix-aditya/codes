#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
const int mxn=2e5+5;
pair<ll,ll> val[mxn];
vector<ll> adj[mxn];
ll dp[mxn][2];

void dfs( ll u, ll parent){
    dp[u][0]=dp[u][1]=0;
    for(auto v: adj[u]){
        if(v==parent)
            continue;
        dfs(v, u);
        
        dp[u][0]+=max(abs(val[u].first-val[v].first)+dp[v][0], abs(val[u].first-val[v].second)+dp[v][1]);
        dp[u][1]+=max(abs(val[u].second-val[v].first)+dp[v][0], abs(val[u].second-val[v].second)+dp[v][1]);
    }
}

void solve()
{
    
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    int u,v;
    f(i,1,n+1){
        cin>>u>>v;
        val[i].first=u;
        val[i].second=v;
    }
    
    f(i,0,n-1){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);
    
    cout<<max(dp[1][0], dp[1][1])<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
