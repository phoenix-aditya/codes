#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
const int mod=1e9+7;
//aditya ranaut- phoenix_aditya

const int mxn=1e5+5;
ll dp1[mxn];
ll dp2[mxn];

void dfs(ll child, ll parent,vector<ll> adj[]){
    ll total=0;

    dp1[child]=dp2[child]=1;
    
    for(auto node: adj[child]){
        if(node==parent)
            continue;
        dfs(node, child, adj);
        dp1[child]=(dp1[child]+2*(dp1[node]))%mod;
        dp2[child]=(dp2[node]+dp2[child])%mod;
        dp2[child]=(dp2[child]+dp1[node])%mod;
        total+=dp1[node];
    }
    for(auto node: adj[child]){
        if(node==parent)
            continue;
        ll ree=(total-dp1[node]+mod)%mod;
        dp2[child]=(dp2[child]+(dp1[node]*ree)%mod)%mod;
    }
}

void solve()
{
    memset(dp1, 0, sizeof(dp1));
    memset(dp2, 0, sizeof(dp2));
    
    ll n;
    cin>>n;
    
    vector<ll> adj[n+1];
    
    ll u,v;
    f(i,0,n-1){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    dfs(1, 1, adj);
    cout<<dp2[1]%mod<<endl;
}

int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
