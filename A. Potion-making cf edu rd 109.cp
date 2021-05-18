#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

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
    
    ll zeta=100-k;
    ll div=gcd(k,zeta);
    k/=div;
    zeta/=div;
    
    cout<<k+zeta<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
