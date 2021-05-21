#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>
 
//aditya ranaut- phoenix_aditya
map<ll,ll> m;

void print(ll ans){
    cout<<ans<<endl;
}
void solve()
{
    m.clear();
    ll n;
    cin>>n;
    
    vector<ll> arr(n);
    f(i,0,n){
        cin>>arr[i];
    }
    
    ll ans=0;
    for(int k=0;k<arr.size();k++){
        if(m.find(arr[k])!=m.end()){
            
            ll zeta=arr.size()-k;
            zeta*=m[arr[k]];
            ans+=zeta;
            
        }
        m[arr[k]]++;
        m[arr[k]]+=k;
    }
    print(ans);
}
 
 
 
int main()
{
    speed;
    
    wh(t)
    solve();
    
    return 0;
}
