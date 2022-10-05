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
    ll x, y;
    cin>>x>>y;
    ll answer=0;
    if(x<y)
    {
        if(y%2==0)
        {
            answer=(y-1)*(y-1)+x;
            cout<<answer<<endl;
            return;
        }
        else
        {
            answer=(y*y)-x+1;
            cout<<answer<<endl;
            return;
        }
    }
    else
    {
        if(x%2==0)
        {
            answer=(x*x);
            answer=answer-y+1;
            cout<<answer<<endl;
            return;
        }
        else
        {
            answer=(x-1)*(x-1)+y;
            cout<<answer<<endl;
            return;
        }
    }
}



int main()
{
    speed;
    wh(t)
    {solve();}
    
    return 0;
}
