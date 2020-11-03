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
    
    ll mean=0;
    ll arr[n];
    
    f(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    mean=arr[n/2];
    
    ll ans=0;
    f(i,0,n)
    {
        ans+=abs(mean-arr[i]);
    }
    cout<<ans;
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
