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

bool func(ll arr[], ll n){
    int len=1;
    
    while(len<=n-1){
        ll x=0;
        ll x1=0;
        
        for(int i=0;i<len;i++){
            x^=arr[i];
        }
        
        for(int i=len;i<n;i++){
            if(x1==x){
                x1=0;
            }
            x1^=arr[i];
        }
        if(x1==x){
            return true;
        }
        
        len++;
    }
    return false;
}
void solve()
{
    ll n;
    cin>>n;
    
    ll arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    bool a1=func(arr, n);
    reverse(arr, arr+n);
    bool a2=func(arr, n);
    
    if(a1|a2){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    
    return 0;
}
