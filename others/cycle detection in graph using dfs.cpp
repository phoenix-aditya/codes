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
int visited[mxn]={0};

//passing parent with the node to check if back edge exists

bool cycledetectdfs(int node, int parent){
    visited[node]=true;
    
    for(auto x:adj[node]){
        if(!visited[x])
        {if(cycledetectdfs(x, node))
            return true;}
        else
        {if(x!=parent)
            return true;}
    }
    return false;
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    if(!cycledetectdfs(1, 0))
        cout<<"graph does not have cycles\n";
    else
        cout<<"graph has cycles\n";
    
    return 0;
}
/*
 5 5
 1 2
 2 3
 2 4
 3 4
 4 5
 */
