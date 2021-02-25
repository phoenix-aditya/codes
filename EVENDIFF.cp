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
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<min(odd,even)<<endl;
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
