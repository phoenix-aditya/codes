#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    ll a[n];
    map<ll,ll> arr;
    
    f(i,0,n){
        cin>>a[i];
        ll rem=a[i]%m;
        
        if(arr.find(rem)==arr.end()){
            arr.insert({rem,1});
        }
        else
            arr[rem]++;
    }
    
    ll ans=0;
    
    if(arr[0]>0){
        ans++;
    }
    for(int i=1;i<=m/2;i++){
        if(i==(m-i)){
            if(arr[i]>0)ans++;
            arr[i]=0;
        }
        else{
            ll smol;
            if(arr[i]>arr[m-i]){
                smol=arr[m-i];
                arr[m-i]=0;
                arr[i]-=smol;
                
                if(arr[i]>0 && smol>0){
                    arr[i]--;
                }
            }
            else{
                smol=arr[i];
                arr[i]=0;
                arr[m-i]-=smol;
                
                if(arr[m-i]>0 && smol>0){
                    arr[m-i]--;
                }
            }
            if(smol>0)ans++;
        }
    }
    for(auto x: arr){
        if(x.second>0 && x.first!=0)
            ans+=x.second;
    }
    cout<<ans<<endl;
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
