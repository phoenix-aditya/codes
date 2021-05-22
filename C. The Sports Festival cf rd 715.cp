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
const int mxn=2e3+5;
ll dp[mxn][mxn];

ll func(ll s[], ll l,ll r){
    if(l==r)
        return 0;
    if(dp[l][r]!=-1)
        return dp[l][r];
    
    return dp[l][r]=s[r]-s[l]+min(func(s, l+1, r), func(s, l, r-1));
}
void solve()
{
    ll n;
    cin>>n;
    ll s[n];
    f(i,0,n) cin>>s[i];
    memset(dp, -1, sizeof(dp));
    
    sort(s, s+n);
    if(n==1){
        cout<<0<<endl;
        return;
    }
    cout<<func(s, 0, n-1)<<endl;
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
