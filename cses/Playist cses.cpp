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
    map<ll,ll> freq;
    
    ll arr[n];
    f(i,0,n)cin>>arr[i];
    ll ans=0;
    for(ll i=0,j=0;i<n;i++)
    {
        while(j<n && freq[arr[j]]<1)
        {
            freq[arr[j]]++;
            j++;
        }
        ans=max(ans,j-i);
        freq[arr[i]]--;
    }
    cout<<ans;
    
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
