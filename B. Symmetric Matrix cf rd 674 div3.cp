#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n, m;
    cin>>n>>m;
    
    ll x,y,w,z;
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>w>>z;
        
        if(y==w && m%2==0)
        {
            ans=true;
        }
    }
    if(ans)
        cout<<"YES\n";
    else
    cout<<"NO\n";
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
