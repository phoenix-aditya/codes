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
const int mxn=1e3+3;
vector<int> adj[mxn];
bool visited[mxn];
int low[mxn];
int intime[mxn];

// finding bridges using dfs in a graph
// low contains the lowest in time of adjacent nodes for a given node
// in time is the time dfs reached a particular node
// we can generalize if low time of a node is less than the in time of its parent
// then the node is connected to an ancestor other than the parent
int timer=0;
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
            low[node]=min(low[node],low[x]);
        }
    }
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    
    f(i,0,e){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, -1);
    return 0;
}
