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

// given 2 nodes, finding whether one node lies in the subtree of the other node
// in and out time of nodes
// in time is when dfs reached a node
// out time is when dfs returned to a node after transversing the whole tree below this node
// using in and out time we can decide of one node lies in the subtree of second node
// so if node which needs to lie is x, and x lies in subtree of y we need to check
// intime of y would be less than x
// similarly out time of x would be lesser than the out time of y
// y will come first and go later than x basically if x is in the subtree of y

int timer=1;
int intime[mxn];
int outtime[mxn];

void calcinout(int node){
    visited[node]=true;
    // setting intime and incrementing the timer
    intime[node]=timer++;
    
    for(auto x:adj[node]){
        if(!visited[x])
            calcinout(x);
    }
    //setting outtime and incrementing the timer
    outtime[node]=timer++;
}

bool isinsubstree(int x, int y){
    if(intime[x]>intime[y] && outtime[x]<outtime[y])
        return true;
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
    calcinout(1);
    
    int q;
    cout<<"enter number of queries: ";
    cin>>q;
    
    while(q--)
    {
        cin>>a>>b;
        cout<<a<<" "<<b<<" : "<<isinsubstree(a, b)<<endl;
    }
    return 0;
}
/*
 5 4
 1 2
 2 3
 2 4
 4 5
 */
