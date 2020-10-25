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
    ll strings=6;
    ll a[strings];
    f(i,0,strings)
    cin>>a[i];
    
    ll n;
    cin>>n;
    
    ll notes[n];
    f(i,0,n)
    cin>>notes[i];
    
    sort(notes, notes+n);
    vector<ll> possibilities[n];
    
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<strings;i++)
    {
        if(notes[n-1]>=a[i])
            possibilities[j].push_back(notes[j]-a[i]);
    }
    }
    
    vector<ll> allnotesmin;
    vector<ll> allnoteshigh;
    
    for(int i=0;i<n;i++)
    {
        ll min=LLONG_MAX;
        ll max=0;
        
        for(auto x:possibilities[i])
        {
            
            if(x>max)
                max=x;
            if(x<min)
                min=x;
        }
        
        allnotesmin.push_back(min);
        allnoteshigh.push_back(max);
    }
    for(auto x:allnoteshigh)
        cout<<x<<" ";
    cout<<endl;
    
    for(auto x:allnotesmin)
        cout<<x<<" ";
    cout<<endl;
    
    
    ll ans=LLONG_MAX;
    
    for(auto x:allnotesmin)
        for(auto y: allnoteshigh)
        {
            if(abs(x-y)<ans)
                ans=abs(x-y);
        }
    
    cout<<ans<<endl;
    
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    solve();
    
    return 0;
}
