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
    ll x;
    cin>>x;
    
    ll b=x%11;
    ll a=x-b*111;
    
    if(a>=0 && a%11==0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
