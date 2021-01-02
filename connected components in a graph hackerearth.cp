#include<bits/stdc++.h>
using namespace std;


//aditya ranaut- phoenix_aditya
//hackerearth connected components in graph
const int mxn=1e5+5;
bool visited[mxn]={0};
vector<int> adj[mxn];

void dfs(int root){
  //  cout<<root<<"->";
    visited[root]=true;
    for(auto x:adj[root]){
        if(!visited[x])
            dfs(x);
    }
}

int main()
{
    int n,e,a,b;
   // cout<<"enter of nodes: ";
    cin>>n;
   // cout<<"enter number of edges: ";
    cin>>e;
    
    while(e--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int numberofconnected=0;
    for(int i=1;i<=n;i++){
        if(!visited[i])
        {
            numberofconnected++;
            dfs(i);
        }
    }
    cout<<numberofconnected;
    return 0;
}
/*
 8 5
 1 2
 2 3
 2 4
 3 5
 6 7
 */
