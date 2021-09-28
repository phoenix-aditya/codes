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
int subtreesize[mxn];

//finding size of subtree for all nodes O(n)

int subtreecalc(int node){
    subtreesize[node]=1;
    visited[node]=true;
    for(auto x:adj[node])
    {
        if(!visited[x])
        {subtreesize[node]+=subtreecalc(x);}
    }
    return subtreesize[node];
}



int main()
{
    int n,e,a,b;
    cin>>n;
    e=n-1;
    
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //subtree size changes with root
    //we call the function considering root is 1
    subtreecalc(1);
    
    for(int i=1;i<=n;i++){
        cout<<i<<" : "<<subtreesize[i]<<endl;
    }
    
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
