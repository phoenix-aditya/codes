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
    int n,k;
    cin>>n>>k;
    ll a[n];
    f(i,0,n)
    cin>>a[i];
    
    sort(a,a+n);
    ll ans=LLONG_MAX;
    for(int i=0;i<n && (i+k-1)<n;i++)
    {
        if(a[i+k-1]-a[i]<ans)
            ans=a[i+k-1]-a[i];
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

    wh(t)
     {solve();}
    
    return 0;
}
