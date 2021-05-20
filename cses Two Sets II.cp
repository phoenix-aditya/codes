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
const int mxn=2*1e5;
int dp[505][mxn];
void numberofways(int total , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=total;j++){
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=total;j++){
            if(i<=j){
                dp[i][j]=(dp[i-1][j-i]+dp[i-1][j])%mod;
            }else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n-1][total];
}
void solve()
{
    int n;
    cin>>n;
    
    int total=n*(n+1)/2;
    if(total%2!=0){
        cout<<0;
        return;
    }
    total/=2;
    numberofways(total, n);
}

int main()
{
    speed;
    solve();
    
    return 0;
}
