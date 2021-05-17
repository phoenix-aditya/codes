#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
const int mod=1e9+7;
//aditya ranaut- phoenix_aditya

ll gcd(ll a, ll b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}

void solve()
{
    ll k;
    cin>>k;
    ll ans=0;
    for(int i=1;i<=2*k;i++){
        ans+=gcd(k+i*i, k+(i+1)*(i+1));
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
