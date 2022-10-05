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
bool compi(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b){
    return get<1>(a)<get<1>(b);
}

void solve()
{
    ll n;
    cin>>n;
    tuple<ll,ll,ll> arr[n];
    // i, w, l
    
    
    
    for(int i=0;i<n;i++){
        get<0>(arr[i])=i;
        cin>>get<1>(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cin>>get<2>(arr[i]);
    }
    sort(arr, arr+n, compi);

    ll ans=0;
    for(int i=1;i<n;i++){
        ll zozo=get<2>(arr[i]);
        while(get<0>(arr[i])<=get<0>(arr[i-1])){
            ans++;
            get<0>(arr[i])=get<0>(arr[i])+zozo;
        }
    }
    cout<<ans<<endl;
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
