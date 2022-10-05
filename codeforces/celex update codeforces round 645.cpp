#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    ll x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    cout<<abs(x2-x1)*abs(y2-y1)+1<<"\n";
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
