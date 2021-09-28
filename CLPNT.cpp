#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
// so this line was coreected

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll a[n];
    
    set<ll> vals;
    
    f(i,0,n)
    {cin>>a[i];vals.insert(a[i]);}
    
    ll q;
    cin>>q;
    
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        
        ll k=x+y;
        
        ll low=0;
        ll high=n-1;
        ll mid=(low+high)/2;
        
        if(vals.count(k)==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(k<a[0])
        {
            cout<<0<<endl;
            continue;
        }
        else if(k>a[n-1])
        {
            cout<<n<<endl;
            continue;
        }
        ll count=0;
        
        while(low<=high)
        {
            mid=(low+high)/2;
            
            if(a[mid]<=k)
            {
                count=mid+1;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        cout<<count<<endl;
    }
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
