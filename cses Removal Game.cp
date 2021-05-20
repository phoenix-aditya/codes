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
const int mxn=5e3+3;
ll dp[mxn][mxn];

ll func(ll start, ll end, ll arr[]){
    if(start>end){
        return 0;
    }
    if(dp[start][end]!=-1)
        return dp[start][end];
    
    ll t1=arr[start]+func(start+2, end, arr);
    ll t2=func(start+1, end-1, arr);
    ll t3=arr[end]+func(start, end-2, arr);
    ll t4=arr[start]+t2;
    t2+=arr[end];
    return dp[start][end]=max(min(t1,t4),min(t2,t3));
}

void solve()
{
    ll n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    
    ll arr[n];
    f(i,0,n) cin>>arr[i];
    
    cout<<func(0, n-1, arr);
}



int main()
{
    speed;
    solve();
    
    
    return 0;
}
