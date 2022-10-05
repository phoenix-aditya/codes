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
    
    vector<pair<ll, ll>> times;
    ll start,end;
    f(i,0,n)
    {
        cin>>start>>end;
        times.push_back({end,start});
    }
    sort(times.begin(), times.end());
    ll ans=0;
    ll prevend=0;
    f(i,0,n)
    {
        if(times[i].second>=prevend)
        {ans++;prevend=times[i].first;}
    }
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
