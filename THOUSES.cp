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

const int mxn=3*1e5+5;
ll cost[mxn];
bool visited[mxn]={0};
ll calccost(vector<ll> adj[], ll node){
   // cout<<"called "<<node<<"\n";
    visited[node]=true;
    if(adj[node].size()==1 && visited[adj[node][0]]==true){
        return cost[node]=1;
    }else{
        int counter=1;
        vector<ll> weights;
        for(auto x: adj[node]){
            if(!visited[x]){
                cost[x]=calccost(adj, x);
                weights.push_back(cost[x]);
            }
        }
        sort(weights.begin(), weights.end());
        
        for(int i=weights.size()-1;i>=0;i--){
            cost[node]=cost[node]+(weights[i]*counter);
            counter++;
        }
    }
    //cout<<cost[node]<<endl;
    return (1+cost[node]);
}

void solve()
{
    memset(cost, 0, sizeof(cost));
    memset(visited, 0, sizeof(visited));
    
    ll n,xeta;
    cin>>n>>xeta;
    ll value[n+1];
    vector<ll> adj[n+1];
    value[1]=xeta;
    bool vis[n+1];
    ll u,v;
    memset(vis, 0, sizeof(vis));
    
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
//    for(int i=1;i<=n;i++){
//        cout<<"i: ";
//        for(auto x: adj[i]){
//            cout<<x<<" ";
//        }cout<<endl;
//    }
    calccost(adj, 1);
//    memset(vis, 0, sizeof(vis));
//    for(int i=1;i<=n;i++){
//        cout<<cost[i]<<" ";
//    }cout<<endl;
    
    cout<<(((cost[1]+1)%mod)*(xeta%mod))%mod<<endl;
}

int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

