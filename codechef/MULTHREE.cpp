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
    ll k, d0, d1;
    cin>>k>>d0>>d1;
    
    ll s=(d0+d1);
    
    ll c=(2*s)%10+(4*s)%10+(8*s)%10+(6*s)%10;
    
    ll arr[]={(2*s)%10,(4*s)%10,(8*s)%10,(6*s)%10};
    
    ll sum=0;
    
    if(k==2)
    {
        sum=s+(s%10);
    }
    else
    {
        sum=s+(s%10);
        
        ll cycles=(k-3)/4;;
        
        ll leftover=(k-3)-(4*cycles);
        
        sum+=(c*cycles);
        
        for(int i=0;i<leftover;i++)
        {
            sum+=arr[i];
        }
    }
    
    if(sum%3==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
