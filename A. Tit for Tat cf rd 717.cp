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


void solve()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        if(arr[i]<=k){
            arr[n-1]+=arr[i];
            k-=arr[i];
            arr[i]=0;
        }else if(k>0){
            arr[i]-=k;
            arr[n-1]+=k;
            k=0;
        }else{
            break;
        }
    }
    f(i,0,n){
        cout<<arr[i]<<" ";
    }cout<<endl;
   
}



int main()
{
    speed;
    wh(t)
    solve();
    
    
    return 0;
}
