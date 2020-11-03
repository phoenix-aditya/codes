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
    ll ans=LLONG_MIN;
    ll sum=0,temp;
    
    cin>>temp;
    sum=LLONG_MIN;
    sum=max(sum+temp,temp);
    ans=max(ans,sum);
    f(i,1,n)
    {
        cin>>temp;
        sum=max(sum+temp,temp);
        ans=max(ans,sum);
    }
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
