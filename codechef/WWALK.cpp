#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    ll n;
    cin>>n;
    
    ll a[n];
    ll b[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    
    ll sum1[n], sum2[n];
    ll ans=0;
    sum1[0]=a[0];
    sum2[0]=b[0];
    
    if(a[0]==b[0])
        ans+=a[0];
    
    for(int i=1;i<n;i++)
    {
        sum1[i]=sum1[i-1]+a[i];
        sum2[i]=sum2[i-1]+b[i];
        
        if(sum1[i]==sum2[i] && a[i]==b[i])
            ans+=a[i];
        
    }
    
    cout<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
