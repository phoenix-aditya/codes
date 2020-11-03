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
    ll n,p;
    cin>>n>>p;
    
    set<pair<ll,ll>> price;
    ll temp;
    f(i,0,n)
    {
        cin>>temp;
        price.insert({temp,i});
    }
    
    while(p--)
    {
        cin>>temp;
        auto it=price.lower_bound({temp+1,0});
        
        if(it==price.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            --it;
            cout<<(*it).first<<endl;
            price.erase(it);
        }
//        for(auto x:price)
//            cout<<x<<" ";
//        cout<<endl;
    }
}



int main()
{
//        auto start = high_resolution_clock::now();
    
//    speed;
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    #endif

     solve();
    
//        auto stop = high_resolution_clock::now();
//        auto duration = duration_cast<microseconds>(stop - start);
//
//          cout << "Time taken by function: "
//               << duration.count() << " microseconds" << endl;
//
    return 0;
}
