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
const int m= 1000000007;

ll power(int n)
{
    int x=2;
    ll result=1;
    
    x=x%m;
    
    if(x==0)
        return 0;
    
    while(n>0)
    {
        if(n&1)
            result=(result*x)%m;
        
        n=n>>1;
        x=(x*x)%m;
    }
    
    return result;
}

void solve()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    map<ll,ll> value;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    /*
    
    for(int i=0;i<n;i++)
    {
        ll z=(1LL<<(n-1-i))%m;
        
        if(!value[arr[i]])
            value[arr[i]]=z;
        else
            value[arr[i]]=(value[arr[i]]+z)%m;
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<value[i]<<" ";
    }
    cout<<endl;
     
     */
    int ans[n+1];
    ans[n]=1;
    for(int i=n-1;i>0;i--)
    {
        ans[i]=(ans[i+1]*2)%m;
    }
    
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}



int main()
{
//    cout<<power(0);
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
