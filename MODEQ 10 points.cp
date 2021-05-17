#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    int ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=i+1;j<=n;j++){
            if((m%i)%j==(m%j)%i){
                ans++;
            }
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

