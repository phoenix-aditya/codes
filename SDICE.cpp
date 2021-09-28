#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll mid4=44;//right
    ll n;
    cin>>n;
    ll ans=0;
    if(n<5){
        if(n==1)ans=20;
        else if(n==2)ans=36;
        else if(n==3)ans=51;
        else if(n==4)ans=60;
    }
    else{
        ll top=n%4;
        ll bottom=floor((n-top)/4);
    
        ans=bottom*mid4;
        
        if(top==0)ans+=16;
        else if(top==1)ans+=32;
        else if(top==2)ans+=44;
        else if(top==3)ans+=55;
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
