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
const int mxn=1e6+2;
ll cumulative[mxn];

void inicumu(ll n){
    for(int i=0;i<=n;i++){
        cumulative[i]=1;
    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    inicumu(n);
    
    
    ll ans=0;
    
    for(ll i=2;i<n+1;i++){
        ans=ans+cumulative[m%i];
        for(ll j=m%i;j<n+1;j+=i){
            cumulative[j]+=1;
        }
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
