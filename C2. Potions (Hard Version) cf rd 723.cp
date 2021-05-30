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
    f(i,0,n){
        cin>>a[i];
    }
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum=0;
    ll ans=0;
    f(i,0,n){
        sum+=a[i];
        ans++;
        pq.push(a[i]);
        
        while(sum<0){
            sum-=pq.top();
            pq.pop();
            ans--;
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
