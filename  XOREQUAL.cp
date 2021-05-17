#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define mod 1000000007
//aditya ranaut- phoenix_aditya
ll power(ll n, ll m){
    ll ans=1;
    n=n%mod;
    if(n==0)return 0;
    while(m>0){
        if(m%2!=0){
            ans=(ans*n)%mod;
        }
        m=m>>1;
        n=(n*n)%mod;
    }
    return ans;
}
void solve()
{
    ll n;
    cin>>n;
    n=power(2,n-1);
    
    cout<<n<<endl;
}

int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
/*
 11
 1 4
 2 5
 7 5
 10 4
 3 6
 7 15
 2 9
 7 5
 9 3
 10 1
 10 13
 13 19
 
 

 3 5
 
 */

