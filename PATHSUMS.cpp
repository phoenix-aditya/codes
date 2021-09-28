#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> edges(n);
    for(int i=0;i<n-1;i++){
        int _1,_2;
        cin>>_1>>_2;
        _1--;
        _2--;
        edges[_1].push_back(_2);
        edges[_2].push_back(_1);
    }
    bool visited[n];
    memset(visited, 0, sizeof(visited));
    
    int ans[n];
    queue<pair<int,int>> pendingNodes;
    pendingNodes.push({0,1});
    ans[0]=1;
    visited[0]=true;
    while(!pendingNodes.empty()){
        int size=pendingNodes.size();
        while(size--){
            pair<int,int> front=pendingNodes.front();
            pendingNodes.pop();
            for(auto x:edges[front.first]){
                if(visited[x])
                    continue;
                visited[x]=true;
                if(front.second==2) {
                    pendingNodes.push({x,1});
                    ans[x]=1;
                }
                else{
                    pendingNodes.push({x,2});
                    ans[x]=2;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
