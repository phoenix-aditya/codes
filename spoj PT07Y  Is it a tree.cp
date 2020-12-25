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
const int mxn=1e4+5;
vector<int> adj[mxn];
bool visited[mxn]={0};

//single source shortest path on trees using dfs
bool isittree=true;
void dfs(int root){
    visited[root]=true;
    for(auto x:adj[root])
        if(!visited[x])
            dfs(x);
}


int main()
{
    speed;
    int n,e,a,b;
    cin>>n>>e;
    
    f(i,0,e){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    
    for(int i=1;i<=n;i++){
        if(!visited[i])
            isittree=false;
    }
    if(e>n-1)
        isittree=false;
    if(isittree)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
