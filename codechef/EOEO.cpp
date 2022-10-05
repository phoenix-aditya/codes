#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    ll ts;
    cin>>ts;
    
    ll vas=ts;
    ll count1b=0;
    ll count1a=0;
    ll p=1ll;
    int counter=0;
    
    while(!(vas&p))
    {
        vas>>=1;
    }
    vas>>=1;
    cout<<vas<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
