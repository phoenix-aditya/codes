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
    ll n;
    cin>>n;
    
    ll a[n];
    ll b[n];
    f(i,0,n)cin>>a[i];
    f(i,0,n)cin>>b[i];
    
    ll tempmax=0;
    ll ans=0;
    f(i,0,n){
        tempmax+=a[i]*b[i];
    }
    ans=tempmax;
    
    for(int center=0;center<n;center++){
        ll temp=tempmax;
        for(int x=center-1,y=center+1;x>=0 && y<n; x--,y++){
            temp-=(a[x]*b[x]+a[y]*b[y]);
            temp+=(a[x]*b[y]+a[y]*b[x]);
            
            if(temp>ans)
                ans=temp;
        }
    }
    for(int between=0;between<n;between++){
        ll temp=tempmax;
        
        for(int x=between,y=between+1;x>=0 && y<n;x--,y++){
            temp-=(a[x]*b[x]+a[y]*b[y]);
            temp+=(a[x]*b[y]+a[y]*b[x]);
            
            if(temp>ans)
                ans=temp;
        }
        
    }
    
    cout<<ans<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}

