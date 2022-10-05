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
    ll q;
    cin>>n>>q;
    
    ll arr[n+2];
    arr[0]=-1;
    arr[n+1]=-1;
    
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll ans=n;
    
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==arr[i+1])
            ans--;
    }
    
    ll x,y;
    while(q--)
    {
        cin>>x>>y;
        
        if(arr[x-1]==arr[x] && arr[x]!=y)
            ans++;
        if(arr[x+1]==arr[x] && arr[x]!=y)
            ans++;
            
        if(arr[x-1]!=arr[x] && arr[x-1]==y)
            ans--;
        if(arr[x+1]!=arr[x] && arr[x+1]==y)
            ans--;
        arr[x]=y;
        cout<<ans<<endl;
    }
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
