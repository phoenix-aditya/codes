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
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    p-=1;
    k-=1;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    
    if(arr[p]==x)
    {
        cout<<0<<endl;
        return;
    }
    
    ll z=0;
    
    if(p>=k && arr[p]<=x)
    {
        for(ll i=0;i<n;i++)
        {
            if(arr[i]>=x)
            {
                break;
            }
            z++;
        }
        z-=p;
        cout<<z<<endl;
        return;
    }
    if(k>=p && arr[p]>=x)
    {
        z=0;
        while(z<=p && arr[z]<=x)
            z++;
        z=z-1;
        p-=z;
        cout<<p<<endl;
        return;
    }
    cout<<-1<<endl;
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
