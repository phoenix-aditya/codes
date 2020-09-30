#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
//you can correct code at 36 line

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    int arr[n];
    int sorted[n];
    
    f(i,0,n)
    {cin>>arr[i];sorted[i]=arr[i];}
    
    
    
    sort(sorted,sorted+n);
    bool checker1=true;
    bool checker2=true;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sorted[i])
            continue;
        else
        {
            checker1=false;
            break;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sorted[n-i-1])
            continue;
        else
        {
            checker2=false;
            break;
        }
    }
    if(checker1 || checker2)
    {
        cout<<0<<endl;
        return;
    }
    
    
    
    
    ll z=0;
    for(ll i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {z=i;break;}
    }
//    cout<<z<<endl;
    
    if(z==n-1)
    {
        for(ll i=n-1;i>0;i--)
        {
            if(arr[i]<arr[i-1])
            {cout<<i<<endl;return;}
        }
    }
//    cout<<z<<endl;
    ll kz=z;
    for(ll i=z;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            z=i;break;
        }
    }
    
//    cout<<z<<endl;
    if(kz==z)
        cout<<0<<endl;
    else if(z>0)
        cout<<z<<endl;
    else
        cout<<0<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
