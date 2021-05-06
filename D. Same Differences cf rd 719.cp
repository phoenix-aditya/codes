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
    
    ll arr[n];
    map<ll,ll> freq;
    
    f(i,0,n){
        cin>>arr[i];
        freq[arr[i]-i]++;
    }
//    for(auto x: freq){
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    ll ans=0;
    for(auto &x: freq){
        ll zeta=(x.second)*(x.second-1);
        zeta/=2;
        ans+=zeta;
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
