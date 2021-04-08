#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)v
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    double temp=cos(pi/n)*cos(pi/n);
    double ans=1/(1-temp);
    cout<<setprecision(10)<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
