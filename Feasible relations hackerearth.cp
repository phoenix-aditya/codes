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
const int mxn=1e6+6;
vector<int> adj[mxn];
bool visited[mxn];
int colour[mxn];
int cc=1;

void dfs(int start){
    visited[start]=true;
    colour[start]=cc;
    
    for(auto x:adj[start]){
        
        if(!visited[x])
        {
            dfs(x);
        }
    }
}

void solve()
{
    cc=1;
    int n, e,a,b;
    string temp;
    string s1="=";
    string s2="!=";
    
    cin>>n>>e;
    for(int i=1;i<=n;i++){adj[i].clear(); visited[i]=0;colour[i]=0;}
    vector<tuple<int, string, int>> input;
    while(e--){
        cin>>a;
        cin>>temp;
        cin>>b;
        
        if(temp==s1){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        else{
            input.push_back({a,temp,b});
        }
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i);
            cc++;
        }
    }
    
    for(auto x:input){
        a=get<0>(x);
        b=get<2>(x);
        if(colour[a]==colour[b] && colour[a]!=0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
/*
 5 5
 1 = 2
 3 = 1
 4 != 2
 5 = 4
 3 != 5
 
 5 4
 1 = 2
 2 != 3
 5 = 4
 1 = 3
 */


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
