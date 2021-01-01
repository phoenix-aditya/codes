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
const int mxn=1e5+5;
vector<int> adj[mxn];
bool visited[mxn];

int counter=0;
void dfs(int node){
    visited[node]=true;
    counter++;
    for(auto x:adj[node]){
        if(!visited[x]){
            dfs(x);
        }
    }
}

void solve()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=1;i<=n;i++){
        adj[i].clear();
        visited[i]=0;
    }
    
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll ans=1;
    int connected=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            counter=0;
            dfs(i);
            connected++;
            ans=(ans*counter)%m;
        }
    }
    cout<<connected<<" "<<ans<<endl;
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
