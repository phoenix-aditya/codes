#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
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
const int mxn=1e4;
vector<int> adj[mxn];
bool visited[mxn];
bool composite[mxn];
int dist[mxn];
vector<int> primenumbers;

void gensieve(){
    for(int i=2;i<mxn;i++){
        if(!composite[i])
        {
            primenumbers.push_back(i);
            for(int j=i*2;j<mxn;j+=i)
            composite[j]=true;
        }
    }
}

bool isone(int a, int b){
    int change=0;
    while(a>0){
        int temp1=a%10;
        a=a/10;
        int temp2=b%10;
        b=b/10;
        if(temp1!=temp2)
            change+=1;
    }
    if(change==1)
        return true;
    
    return false;
}

void createadj(){
    for(int i=0;i<primenumbers.size();i++){
        if(primenumbers[i]<1000)
            continue;
        for(int j=i+1;j<primenumbers.size();j++){
            if(primenumbers[j]<1000)
                continue;
            if(isone(primenumbers[i], primenumbers[j]))
            {
                adj[primenumbers[i]].push_back(primenumbers[j]);
                adj[primenumbers[j]].push_back(primenumbers[i]);
            }
        }
    }
}
void bfs_sssp(int node, int dis){
    for(int i=1;i<mxn;i++)
    {visited[i]=0;dist[i]=0;}
    
    queue<int> q;
    
    dist[node]=dis;
    q.push(node);
    visited[node]=true;
    
    
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        
        for(auto x:adj[curr]){
            if(!visited[x]){
                q.push(x);
                dist[x]=dist[curr]+1;
                visited[x]=true;
            }
        }
    }
}



void solve(){
    int a,b;
    cin>>a>>b;
    if(a==b)
    {cout<<0<<endl;return;}
    
    bfs_sssp(a, 0);
    
    if(dist[b]==0 && a!=b){
        cout<<"Impossible"<<endl;
        return;
    }
    cout<<dist[b]<<endl;
}

int main()
{
    gensieve();
    createadj();
//
//    for(auto x:primenumbers)
//        cout<<x<<" ";
//    cout<<endl;
//
//    for(int i=1;i<=mxn;i++){
//        if(adj[i].size()!=0)
//        {
//            cout<<i<<" : ";
//            for(auto x:adj[i])
//                cout<<x<<" ";
//            cout<<endl;
//        }
//    }
    
    speed;
    wh(t){
        solve();
    }

    return 0;
}
/*
 7 8
 1 2
 1 3
 2 3
 2 4
 3 5
 5 6
 5 7
 6 7
 */
