#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll totsum=n*(n+1)/2;
    
    if(totsum%2!=0)
    {cout<<0<<endl;return;}
    
    ll m= sqrt(1+4*totsum)-1;
    m/=2;
    
    ll parsum=m*(m+1)/2;
    ll ans=0;
    if(parsum==(totsum-parsum))
    {
        ans=(m)*(m-1)+(n-m)*(n-m-1);
        ans/=2;
        ans+=(n-m);
    }
    else
        ans+=(n-m);
    
    cout<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
