#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll arr[n];
    ll sum=0;
    f(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0)cout<<1<<endl;
    else cout<<2<<endl;
}



int main()
{
//        auto start = high_resolution_clock::now();
    speed;
    //cout<<prime.size()<<endl;
    wh(t)
     {solve();}
    
//        auto stop = high_resolution_clock::now();
//        auto duration = duration_cast<microseconds>(stop - start);
//
//          cout << "Time taken by function: "
//               << duration.count()/1000000 << " microseconds" << endl;
    
    return 0;
}
