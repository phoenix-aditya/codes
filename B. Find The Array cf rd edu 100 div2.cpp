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
    ll a[n];
    
    ll sum=0;
    
    f(i,0,n)
    {cin>>a[i];sum+=a[i];}
    
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i+=2){
        sum1+=a[i];
    }
    for(int i=1;i<n;i+=2){
        sum2+=a[i];
    }
    
    sum=sum/2;
    if(sum1<=sum){
        for(int i=0;i<n;i++){
            if(i%2==0){cout<<1<<" ";continue;}
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(i%2!=0){cout<<1<<" ";continue;}
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    
    
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
