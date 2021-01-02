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
bool visited[mxn]={0};

void dfs(int n, vector<int> adj[n+1], int root){
    cout<<root<<"->";
    visited[root]=true;
    for(auto x:adj[root]){
        if(!visited[x])
            dfs(n, adj, x);
    }
}

void solve()
{
    int n,e,a,b;
    cout<<"enter of nodes: ";
    cin>>n;
    cout<<"enter number of edges: ";
    cin>>e;
    
    vector<int> adj[n+1];
    while(e--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
//    to count the connected components we dfs on each node and make all nodes it is connected with as true
//    then we dfs on nodes only which arent connected with the first graph
    int numberofconnected=0;
    for(int i=1;i<=n;i++){
        if(!visited[i])
        {
            numberofconnected++;
            dfs(n, adj, i);
            cout<<endl;
        }
    }
    cout<<"number of connected components: "<<numberofconnected<<endl;
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
