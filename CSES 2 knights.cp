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
    ll k;
    cin>>k;
    for(ll n=1;n<=k;n++)
    {
        cout<<(((n*n)*((n*n)-1))-8-24-((n-4)*16)-16-((n-4)*24)-((n-4)*(n-4)*8))/2<<endl;
    }
}

int main()
{
    speed;
    solve();
    
    return 0;
}
