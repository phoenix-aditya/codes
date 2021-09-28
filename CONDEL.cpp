#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,k;
    cin>>n>>k;
    
    ll arr[n];
    int total1=0;
    ll cumulative[n+1];
    
    f(i,0,n){
        cin>>arr[i];
    }
    
    f(i,0,n){
        cumulative[i]=total1;
        if(arr[i]==1)total1++;
    }
    cumulative[n]=total1;
    
    ll min1=LLONG_MAX;
    
    for(int i=0;i<n-k+1;i++){
        min1=min(min1,cumulative[i+k]-cumulative[i]);
    }
    ll temp1=min1*(min1+1);
    temp1/=2;
    cout<<temp1+(total1-min1)<<endl;
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t){
    solve();
    }
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
