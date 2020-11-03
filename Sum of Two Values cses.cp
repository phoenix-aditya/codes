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
    ll n,x;
    cin>>n>>x;
    
    map<ll,ll> exists;
    ll temp;
    f(i,0,n)
    {
        cin>>temp;
        if(exists.find(x-temp)!=exists.end())
        {
            cout<<i+1<<" "<<exists[x-temp]+1;
            return;
        }
        exists[temp]=i;
    }
    
    cout<<"IMPOSSIBLE";
}



int main()
{
    speed;
    solve();
    
    return 0;
}
