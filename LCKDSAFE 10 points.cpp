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
    ll n;
    cin>>n;
    ll arr[n];
    
    vector<ll> together;
    
    ll counter=1;
    
    f(i,0,n){
        if(i==0){
            cin>>arr[i];
            continue;
        }
        cin>>arr[i];
        
        if(arr[i]==arr[i-1]){
            counter++;
        }
        else{
            if(counter>1)
            {together.push_back(counter);}
            counter=1;
        }
    }
    if(counter>1){
        together.push_back(counter);
    }
    
    ll ans=n*(n-1)/2;
    for(auto x: together){
     //   cout<<x<<" ";
        ll diff=x*(x-1)/2;
        ans-=diff;
    }
   // cout<<endl;
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
