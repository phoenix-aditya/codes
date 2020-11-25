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
//#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    
    int sum=0;
    int temp;
    int ans=0;
    int q;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            cin>>temp;
            sum+=temp;
        }
        cin>>q;
        if(q<=10 && sum>=m)
            ans++;
    }
    cout<<ans<<endl;
    
}

/*
 4 8 4
 1 2 1 2 5
 3 5 1 3 4
 1 2 4 5 11
 1 1 1 3 12
 */


int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
  //  wh(t)
     solve();
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
