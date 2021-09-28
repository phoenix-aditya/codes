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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    if(n==4)
    {
        cout<<"2 4 1 3\n";
        return;
        
    }
    for(int i=1;i<=n;i+=2)
        cout<<i<<" ";
    for(int i=2;i<=n;i+=2)
        cout<<i<<" ";
}



int main()
{
    speed;
    solve();
    
    return 0;
}
