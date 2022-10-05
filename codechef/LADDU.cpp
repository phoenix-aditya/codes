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
    int n;
    string s;
    
    int ans=0;
    int spend;
    cin>>n;
    cin>>s;
    if(s=="INDIAN")
        spend=200;
    else
        spend=400;
    int z;
    while(n--)
    {
        cin>>s;
        
        if(s=="TOP_CONTRIBUTOR")
            ans+=300;
        else if(s=="CONTEST_HOSTED")
            ans+=50;
        
        else if(s=="BUG_FOUND")
        {
            cin>>z;
            ans+=z;
        }
        else if(s=="CONTEST_WON")
        {
            cin>>z;
            if(z>=20)
                ans+=300;
            else
                ans+=(300+(20-z));
        }
    }
    cout<<floor(1.0*ans/spend)<<endl;
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
