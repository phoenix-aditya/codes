#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
const int mxn=1e5+5;
vector<int> adj[mxn];
bool visited[mxn];
int intime[mxn];
int low[mxn];
int timer=0;
int bridgecount=0;
vector<pair<int,int>> ans;

void dfs(int node, int parent){
    intime[node]=timer;
    low[node]=timer++;
    
    visited[node]=true;
    
    for(auto x:adj[node]){
        if(x==parent)
            continue;
        
        if(visited[x])
        {
            // there is a back edge to this child
            
            low[node]=min(low[node],intime[x]);
            if(intime[node]>intime[x])
                ans.push_back({node,x});
        }
        
        else
        {
            // there is a forward edge to this child
            dfs(x,node);
            if(low[x]>intime[node]){
                //has bridge
                bridgecount++;
                return;
            }
            ans.push_back({node,x});
            low[node]=min(low[node],low[x]);
        }
    }
}

void solve()
{
    int n,e,a,b;
    cin>>n>>e;
    
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,-1);
    if(bridgecount>0){
        cout<<0<<endl;
        return;
    }
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
     solve();
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
