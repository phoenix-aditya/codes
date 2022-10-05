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
    vector<pair<ll, ll>> times;
    
    ll n;
    cin>>n;
    
    ll temp1,temp2;
    
    f(i,0,n)
    {
        cin>>temp1>>temp2;
        times.push_back({temp1,1});
        times.push_back({temp2,-1});
    }
    sort(times.begin(), times.end());
    
    ll ans=0;
    ll maxtemp=0;
    for(auto x:times)
    {
        maxtemp+=x.second;
        ans=max(maxtemp,ans);
    }
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
