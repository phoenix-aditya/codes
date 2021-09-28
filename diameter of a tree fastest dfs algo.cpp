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

//finding diameter of a tree efficient approach
//complexity -> 2*n
//we choose a random node, and call dfs on it
//then we call the dfs on the farthest node from this random node, which is proven to be the diameter
//in all cases

int farthest=-1;
pair<int,int> diameterdfs(int node, int dis){
    pair<int,int> temp={node,dis};
    visited[node]=true;
    for(auto x:adj[node]){
        if(!visited[x])
        {
            pair<int, int> zz=diameterdfs(x, dis+1);
            if(temp.second<zz.second)
                temp=zz;
        }
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
    pair<int,int> aa=diameterdfs(1, 0);
    //clearing visited array
    for(int i=1;i<=n;i++){
        visited[i]=0;
    }
    //calling dfs on the farthest node from 1 node
    pair<int, int> bb=diameterdfs(aa.first, 0);
    
    ans=bb.second;
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
