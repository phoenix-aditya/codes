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
int func(ll n, ll arr[]){
    vector<int> dp;
    for(int i=0;i<n;i++){
        auto it=lower_bound(dp.begin(), dp.end(), arr[i]);
        if(it==dp.end()){
            dp.push_back(arr[i]);
        }else
            *it=arr[i];
        
//        for(auto x: dp){
//            cout<<x<<" ";
//        }cout<<endl;
    }
    
    return dp.size();
}

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    cout<<func(n,arr)<<endl;
    
}

int main()
{
    speed;
    solve();
    
    return 0;
}
