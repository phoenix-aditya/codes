#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define mod 1000000007
//aditya ranaut- phoenix_aditya
ll unboundedknapsack(ll coins[], ll sum, ll n){
    ll t[sum+1];
    for(int i=0;i<=sum;i++)t[i]=0;
    t[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                t[i]=(t[i]+t[i-j])%mod;
            }
        }
    }
    return t[sum];
}
void solve()
{
    ll sum;
    cin>>sum;
    
    ll coins[]={1,2,3,4,5,6};
    
    cout<<unboundedknapsack(coins, sum, 6);
}



int main()
{
    speed;
    solve();
    
    return 0;
}
