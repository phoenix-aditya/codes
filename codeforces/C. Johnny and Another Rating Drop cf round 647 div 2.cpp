#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>

ll answer(ll n)
{
    if(n==1)
        return 1;
    else
        return n+answer(n/2);
}
void solve()
{
    
    ll n;
    cin>>n;
    cout<<answer(n)<<endl;
}
    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
