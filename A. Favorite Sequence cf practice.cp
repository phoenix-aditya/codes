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
    f(i,0,n)cin>>arr[i];
    
    vector<ll> ans;
    
    if(n%2==0){
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[n-i-1]);
        }
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[n-i-1]);
        }
        ans.push_back(arr[n/2]);
    }
    for(auto x: ans)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
