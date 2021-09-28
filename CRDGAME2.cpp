#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
#include<string.h>

    //aditya ranaut- phoenix_aditya
const int mxn=1e5+5;
ll arr[mxn];

ll power(ll x, ll y)
{
    if(y==0)
        return 1;
    
    ll zeta= power(x,y/2)%m;
    zeta=(zeta*zeta)%m;
    
    if(y%2!=0)
        zeta=(zeta*x)%m;
    
    return zeta;
}

ll modinv(ll n)
{
    return power(n,m-2);
}
ll ncrmod(ll n, ll r)
{
    ll c[n+1];
    memset(c, 0, sizeof(c));
    c[0]=1;
    
    f(i,1,n+1)
    {
        c[i]=(c[i-1]*i)%m;
    }
    return (c[n] * modinv(c[r]) % m*modinv(c[n - r])%m)%m;
}

ll ncr(ll n, ll r)
{
    if(r==0)
        return 1;
    int ni = n%m, ri = r%m;

       return (ncrmod(n/m, r/m) * ncrmod(ni, ri) % m);
}

    void solve()
    {
        ll n;
        cin>>n;
        
        f(i,0,n)
        cin>>arr[i];
        
        if(n==1)
        {
            cout<<2<<endl;
            return;
        }
            
        ll max=0;
        
        f(i,0,n)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        ll noofmax=0;
        
        f(i,0,n)
        {
            if(arr[i]==max)
                noofmax++;
        }
        ll ans=0;
        if(noofmax%2!=0)
        {
            ans=power(2, n)%m;
        }
        else
        {
            ans=power(2,n)%m;
            ans-=((power(2, n-noofmax)%m)*ncr(noofmax, noofmax/2)%m)%m;
            if(ans<0)
                ans=(ans+m)%m;
        }
        cout<<ans%m<<endl;
    }



    int main()
    {
        speed;
        wh(t)
         {solve();}
        
        return 0;
    }
