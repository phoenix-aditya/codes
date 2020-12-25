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
const int mxn=1e6+6;
vector<int> adj[mxn];
bool visited[mxn];
int level[mxn];
int dist[mxn];

void bfs(int node){
    queue<int> q;
    visited[node]=true;
    dist[node]=0;
    level[dist[node]]++;
    q.push(node);
    
    while(!q.empty()){
        int curr=q.front();
        q.pop();

        for(auto x:adj[curr]){
            if(!visited[x])
            {dist[x]=dist[curr]+1;
            level[dist[x]]++;
            q.push(x);
                visited[x]=true;}
        }
    }
}

void solve()
{
    int n,e,a,b;
    cin>>n>>e;
    
    while(e--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--){
        cin>>a>>b;
        for(int i=0;i<=n;i++){visited[i]=0;level[i]=0;}
        bfs(a);
        cout<<level[b]<<endl;
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
