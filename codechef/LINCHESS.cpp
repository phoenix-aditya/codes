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
    ll n,k;
    cin>>n>>k;
    
    ll arr[n+1];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    
    ll mindiv=LLONG_MAX;
    ll pos=-1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            mindiv=0;
            pos=arr[i];
            break;
        }
        if(arr[i]<k && k%arr[i]==0)
        {
            ll zeta=k/arr[i];
            if(zeta<mindiv)
            {
            mindiv=k/arr[i];
            pos=arr[i];
            }
        }
    }
    if(pos!=-1)
    {
        cout<<pos<<endl;
    }
    else
        cout<<-1<<endl;
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
