#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=(ans*2)%m;
    }
    cout<<ans<<endl;
}

int main()
{
    speed;
    solve();
    
    return 0;
}
