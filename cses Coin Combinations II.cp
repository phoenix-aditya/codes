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

int maxways(int coins[], int n, int x){
    int t[n+1][x+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=x;j++){
            if(i==0)t[i][j]=0;
            if(j==0)t[i][j]=1;
        }
    }
    
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j-coins[i]>=0)
                t[i][j]=(t[i-1][j]+t[i][j-coins[i]])%mod;
            else
                t[i][j]=t[i-1][j];
        }
    }
    
    
    return t[n][x];
}

void solve()
{
    int n,x;
    cin>>n>>x;
    
    int coins[n+1];
    f(i,1,n+1){
        cin>>coins[i];
    }
    
    cout<<maxways(coins, n, x);
}



int main()
{
    speed;
    solve();
    
    return 0;
}
