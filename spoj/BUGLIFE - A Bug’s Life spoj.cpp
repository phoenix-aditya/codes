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

vector<int> adj[2002];
int visited[2002]={0};
int colour[2002]={0};

//biphartite graph test using dfs & colouring
//graph with cycle of odd length are not biphartite

bool isbiphartite(int root, int c){
    
    colour[root]=c;
    visited[root]=true;
    
    for(auto x:adj[root]){
        if(!visited[x]){
            if(!isbiphartite(x, c^1))
                return false;
        }
        else
        {
            if(colour[root]==colour[x])
                return false;
        }
    }
    return true;
}

int main()
{
    speed;
    int t;
    cin>>t;
    for(int zz=1;zz<=t;zz++){
        
        int n,e,a,b;
        cin>>n>>e;
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            visited[i]=0;
            colour[i]=0;
        }
        
        while(e--){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        bool ans=true;
        for(int i=1;i<=n;i++){
            if(!visited[i])
                if(!isbiphartite(i, 0))
                    ans=false;
        }
        cout<<"Scenario #"<<zz<<":\n";
        if(ans==false)
            cout<<"Suspicious bugs found!"<<endl;
        else
            cout<<"No suspicious bugs found!"<<endl;
    }

    return 0;
}
