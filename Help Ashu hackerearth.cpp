#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

const int mxn=1e6;
ll arr[mxn];
ll ste[4*mxn];


void buildtreeeven(ll stpos , ll si , ll ei)
{
    if(si==ei)
    {
        if(arr[si]%2==0)
            ste[stpos]=1;
        else
            ste[stpos]=0;
        
        return;
    }
    
   ll mid=(si+ei)/2;
    
    buildtreeeven(2*stpos, si, mid);
    buildtreeeven(2*stpos+1, mid+1, ei);
    
    ste[stpos]=ste[2*stpos]+ste[2*stpos+1];
}

ll queryeven(ll stpos, ll si, ll ei, ll qsi, ll qei)
{
    if(qei<si || qsi>ei)
    {
        return 0;
    }
    if(si>=qsi && ei<=qei)
    {
        return ste[stpos];
    }
    ll mid=(si+ei)/2;
    
    ll l=queryeven(2*stpos, si, mid, qsi, qei);
    ll r=queryeven(2*stpos+1, mid+1, ei, qsi, qei);
    
    return l+r;
}

void updater(ll stpos, ll si , ll ei , ll update)
{
    if(si==ei)
    {
        if(arr[si]%2==0)
        {ste[stpos]=1;}
        else
        {
            ste[stpos]=0;
        }
        return;
    }
    
    ll mid=(si+ei)/2;
    
    if(update<=mid)
    {
        updater(2*stpos, si, mid, update);
    }
    else
        updater(2*stpos+1, mid+1, ei, update);
    
    ste[stpos]=ste[2*stpos]+ste[2*stpos+1];
}

int main()
{
    ll n;
    cin>>n;
    
    f(i,0,n)
    cin>>arr[i];
    
    buildtreeeven(1, 0, n-1);
    
//    for(int i=0;i<4*n;i++)
//        cout<<sto[i]<<" ";
    
    ll q;
    cin>>q;
    ll a,l,r;
    while(q--)
    {
        cin>>a>>l>>r;
        
        if(a==0)
        {
            arr[l-1]=r;
            updater(1, 0, n-1, l-1);
        }
        else if(a==1)
        {
            cout<<queryeven(1, 0, n-1, l-1, r-1)<<endl;
        }
        else
            cout<<(r-l)-queryeven(1, 0, n-1, l-1, r-1)+1<<endl;

    }
}
/*
 6
 1 2 3 4 5 6
 4
 1 2 5
 2 1 4
 0 5 4
 1 1 6
 
 6
 1 2 3 4 5 6
 3
 1 2 5
 2 1 4
 1 1 6
 */
