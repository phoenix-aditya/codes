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

ll maxways(ll coins[], ll n, ll x){
    ll t[x+1];
    
    memset(t, 0, sizeof(t));
    t[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            if(i-coins[j]>=0){
                t[i]=(t[i]+t[i-coins[j]])%mod;
            }
        }
    }
    return t[x];
}

void solve()
{
    ll n,x;
    cin>>n>>x;
    
    ll coins[n+1];
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
