#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

// this header not working
#include<string>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        swap(a,b);
    }
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    else if(b<=10)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        b=b-a;
        ll z=b%10;
        ll ans=b/10;
        
        if(z>0)
            ans+=1;
        
        cout<<ans<<endl;
        return;
    }
    
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
