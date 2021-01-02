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

//finding diameter of a tree
//for every node we find the farthest node, there fore we consider every node as root and call dfs
//while maintaining a ans variable
// the complexity is n^2


int diameterdfs(int node, int dis){
    int temp=dis;
    visited[node]=true;
    for(auto x:adj[node]){
        if(!visited[x])
            temp=max(temp,diameterdfs(x, dis+1));
    }
    return temp;
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
    
    int ans=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            visited[j]=0;
        }
        int zeta=diameterdfs(i, 0);
        ans=max(ans,zeta);
    }
    cout<<"diameter of tree is: "<<ans<<endl;
    
    return 0;
}
/*
 7 6
 1 2
 2 3
 2 4
 3 7
 4 5
 4 6
 */
