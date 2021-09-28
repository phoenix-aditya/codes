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
    set<ll> arr;
    vector<ll> extra;
    ll temp;
    f(i,0,n){
        cin>>temp;
        if(arr.count(temp)==0)
            arr.insert(temp);
        else
            extra.push_back(temp);
    }
    sort(extra.begin(),extra.end());
    for(auto x: arr){
        cout<<x<<" ";
    }
    for(auto x: extra){
        cout<<x<<" ";
    }
    cout<<endl;
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
