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
    ll n;
    
    cin>>n;
    n=n-1;
    ll u,v;
    ll in=0;
    for(int i=0;i<n;i++)
    {
        cin>>u>>v;
        if(v==1)
            in++;
    }
    if(in==0)
    {
        cout<<"0\n";
        return;
    }
    else
        cout<<in-1<<endl;
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
