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
bool isperfectsquare(ll n){
    float zz=sqrt(n);
    if(ceil(zz)==floor(zz))
        return true;
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
    
    f(i,0,n){
        if(!isperfectsquare(arr[i])){
            cout<<"YES\n";
            return;
        }
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
