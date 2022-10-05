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
const int mxn=1e3+5;
vector<int> adj[mxn];
bool visited[mxn]={0};
int shortestpath[mxn]={0};

//single source shortest path on trees using dfs
void shortestpathcalc(int root, int depth){
    visited[root]=true;
    shortestpath[root]=depth;
    for(auto x:adj[root]){
        if(!visited[x])
            shortestpathcalc(x,depth+1);
    }
}

int main()
{
    speed;
    int n,e,a,b;
    cin>>n;
    e=n-1;
    set<int> girls;
    
    while(e--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q, temp;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        girls.insert(temp);
    }
    shortestpathcalc(1, 0);
    
    int min=INT_MAX;
    vector<pair<int, int>> possans;
    for(int i=1;i<=n;i++){
        if(shortestpath[i]<min && girls.count(i))
        {
            min=shortestpath[i];
            possans.push_back({shortestpath[i],i});
        }
    }
    sort(possans.begin(), possans.end());
    cout<<possans[0].second;
 
    return 0;
}
