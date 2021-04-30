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
    ll r,b,d;
    cin>>r>>b>>d;
    
    float mini=min(r,b);
    float difference=abs(r-b);
    float zeta=difference/mini;
    
    //cout<<zeta<<endl;
    if(zeta<=d){
        cout<<"YES\n";
        return;
    }
    
    cout<<"NO\n";
}



int main()
{
    wh(t)
    solve();
    
    return 0;
}
