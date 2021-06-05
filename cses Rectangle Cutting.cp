#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
int func(ll w, ll h){
    int dp[w+1][h+1];
    
    for(int i=0;i<=w;i++){
        for(int j=0;j<=h;j++){
            if(i==j)
                dp[i][j]=0;
            else{
                dp[i][j]=INT_MAX;
                
                for(int k=1;k<i;k++){
                    dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                }
                for(int k=1;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                }
            }
        }
    }
    return dp[w][h];
}

void solve()
{
    ll a,b;
    cin>>a>>b;
    cout<<func(a, b)<<endl;
    
}

int main()
{
    speed;
    solve();
    
    return 0;
}
