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
    ll n,m,k;
    cin>>n>>m>>k;
    
    ll desired[n];
    for(ll i=0;i<n;i++)
    cin>>desired[i];
    
    ll sizes[m];
    for(ll i=0;i<m;i++)
    cin>>sizes[i];
    
    sort(desired,desired+n);
    sort(sizes,sizes+m);
    ll appt=0, customer=0;
    ll ans=0;
    while(appt<m && customer<n)
    {
        if(sizes[appt]<=(desired[customer]+k) && sizes[appt]>=(desired[customer]-k))
        {
            ans++;
            customer++;
            appt++;
        }
        else if(sizes[appt]<(desired[customer]-k))
            appt++;
        else
            customer++;
    }
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
