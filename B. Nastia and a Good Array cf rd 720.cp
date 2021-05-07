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
const long long mod=1e9+7;
void solve()
{
    ll n;
    cin>>n;
    
    ll arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    
    ll count=n/2;
    cout<<count<<endl;
    for(int i=1;i<n;i+=2){
        cout<<i<<" "<<i+1<<" "<<min(arr[i-1],arr[i])<<" "<<mod<<endl;
    }
}

int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

