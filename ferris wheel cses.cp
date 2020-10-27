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
    ll n,x;
    cin>>n>>x;
    
    ll weight[n];
    for(ll i=0;i<n;i++)
        cin>>weight[i];
    sort(weight, weight+n);
    
    ll start=0,end=n-1;
    ll ans=0;
    while(start<=end)
    {
        if(weight[start]+weight[end]<=x)
        {ans++;start++;end--;}
        else
        {end--;ans++;}
    }
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
