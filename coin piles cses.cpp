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
    ll a,b;
    cin>>a>>b;
    if(b>a)
        swap(a,b);
    if(a>2*b)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        if((a+b)%3==0)
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
