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
const int mxn=1e4+3;
vector<int> adj[mxn];
bool visited[mxn];
int dist[mxn];

//BFS used in finding single source shortest path in unweighted path
//complexity= O(n+e)

void bfs_sssp(int node, int dis){
    
    queue<int> q;
    q.push(node);
    dist[node]=dis;
    
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        
        for(auto x:adj[curr]){
            if(visited[x])
                continue;
            visited[x]=true;
            q.push(x);
            dist[x]=dist[curr]+1;
        }
        visited[curr]=true;
    }
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    // sssp differes for different sources
    // in this case we are finding shortest path from node 3
    bfs_sssp(3, 0);
    
    for(int i=1;i<=n;i++)
    cout<<i<<" : "<<dist[i]<<endl;

    return 0;
}
/*
 7 8
 1 2
 1 3
 2 3
 2 4
 3 5
 5 6
 5 7
 6 7
 */
