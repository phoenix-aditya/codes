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
    
    if(n%2050!=0){
        cout<<-1<<endl;
        return;
    }
    ll digi=n/2050;
    ll ans=0;
    //cout<<digi<<endl;
    while(digi>0){
        int digit=digi%10;
        digi/=10;
        ans+=digit;
    }
    cout<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}

