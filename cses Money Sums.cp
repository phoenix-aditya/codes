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
bool t[102][100003];

void solve()
{
    
    ll n;
    cin>>n;
    
    ll total=0;
    ll coins[n];
    
    f(i,0,n){
        cin>>coins[i];
        total+=coins[i];
    }
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=total;j++){
            if(i==0) t[i][j]=false;
            if(j==0) t[i][j]=true;
        }
    }
    for(int i=0;i<n;i++){
        t[1][coins[i]]=true;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=total;j++){
            if(coins[i-1]<=j)
                t[i][j]=t[i-1][j-coins[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }
    
    vector<int> ans;
    for(int i=1;i<=total;i++){
        if(t[n][i])
            ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x<<" ";
    }cout<<endl;
}



int main()
{
    speed;
    solve();
    
    
    return 0;
}
