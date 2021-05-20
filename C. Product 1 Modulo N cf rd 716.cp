#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
ll gcd(ll a, ll b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}

void solve()
{
    ll n;
    cin>>n;
    
    ll cumulative=1;
    vector<ll> ans;
    for(ll i=1;i<=n-1;i++){
        if(gcd(i, n)==1){
            ans.push_back(i);
            cumulative=(cumulative*i)%n;
        }
    }
    if(cumulative!=1){
        cout<<ans.size()-1<<endl;
        for(auto x: ans){
            if(x==cumulative)
                continue;
            
            cout<<x<<" ";
        }cout<<endl;
    }else{
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }cout<<endl;
    }
}

int main()
{
    speed;
    solve();
    
    return 0;
}
