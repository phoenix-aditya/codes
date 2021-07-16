#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
const int mxn=1e3+3;
int arr[mxn][mxn];
map<int,vector<int>> ans;
int direction[mxn*mxn][9];
bool vis[mxn*mxn+3]={0};

void recur(int i, int j, int m, int n, vector<int> path){
    if(i==0 && j==0){
        path.push_back(arr[i][j]);
        if(ans.find(1)==ans.end())
            ans.insert({1,path});
        else if(ans[1].size()>path.size()){
            ans[1]=path;
        }
        return;
    }
    if(i==0 && j==n-1){
        path.push_back(arr[i][j]);
        if(ans.find(2)==ans.end())
            ans.insert({2,path});
        else if(ans[2].size()>path.size()){
            ans[2]=path;
        }
        return;
    }
    if(i==m-1 && j==0){
        path.push_back(arr[i][j]);
        if(ans.find(3)==ans.end())
            ans.insert({3,path});
        else if(ans[3].size()>path.size()){
            ans[3]=path;
        }
        return;
    }
    if(i==m-1 && j==n-1){
        path.push_back(arr[i][j]);
        if(ans.find(4)==ans.end())
            ans.insert({4,path});
        else if(ans[4].size()>path.size()){
            ans[4]=path;
        }
        return;
    }
    
    if(i<0 || j<0 || i>=m || j>=n)
        return;
    if(vis[arr[i][j]])
        return;
    
    path.push_back(arr[i][j]);
    vis[arr[i][j]]=true;
    
    if(direction[arr[i][j]][1]==1){
        recur(i-1, j, m, n, path);
    }
    if(direction[arr[i][j]][3]==1){
        recur(i, j+1, m, n, path);
    }
    if(direction[arr[i][j]][5]==1){
        recur(i+1, j, m, n, path);
    }
    if(direction[arr[i][j]][7]==1){
        recur(i, j-1, m, n, path);
    }
        recur(i-1, j+1, m, n, path);
    }
    if(direction[arr[i][j]][4]==1){
        recur(i+1, j+1, m, n, path);
    }
    if(direction[arr[i][j]][6]==1){
        recur(i+1, j-1, m, n, path);
    }
    if(direction[arr[i][j]][8]==1){
        recur(i-1, j-1, m, n, path);
    }
    
    path.pop_back();
    vis[arr[i][j]]=false;
}

void solve()
{
    int m,n,s;
    cin>>m>>n>>s;
    int starti=0;
    int startj=0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=(j+1)+(n*i);
            if(arr[i][j]==s){
                starti=i;
                startj=j;
            }
        }
    }
    for(int i=0;i<m*n;i++){
        int temp;
        cin>>temp;
        for(int j=1;j<9;j++){
            cin>>direction[temp][j];
        }
    }
    vector<int> paths;
    vector<bool> vis(n*m+3, 0);
    
    recur(starti, startj, m, n, paths);
    
    for(int i=1;i<=4;i++){
        for(auto x: ans[i])
            cout<<x<<" ";
        cout<<endl;
    }
}

int main()
{
    speed;
    solve();
    
    return 0;
}


