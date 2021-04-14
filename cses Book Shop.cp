#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya


void solve()
{
    int n,x;
    cin>>n>>x;
    
    int v[n];
    int w[n];
    
    f(i,1,n+1){
        cin>>w[i];
    }
    f(i,1,n+1){
        cin>>v[i];
    }
    
    int t[n+1][x+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=x;j++){
            if(i==0 || j==0)t[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j>=w[i]){
                t[i][j]=max(t[i-1][j], t[i-1][j-w[i]]+v[i]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    
    cout<<t[n][x];
}



int main()
{
    speed;
    solve();
    
    return 0;
}
