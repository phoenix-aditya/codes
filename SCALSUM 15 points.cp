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
#define m 4294967296
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
map<ll,ll> pointsto;
vector<ll> one;
vector<ll> two;
const int mxn=3*1e5+5;
ll weight[mxn];

void weightu(ll u)
{
    if(u==1)
    {
        one.push_back(weight[u]);
        return;
    }
    one.push_back(weight[u]);
    weightu(pointsto[u]);
}
void weightv(ll v)
{
    if(v==1)
    {
        two.push_back(weight[v]);
        return;
    }
    two.push_back(weight[v]);
    weightv(pointsto[v]);
}

void solve()
{
    pointsto.clear();
    ll n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++)
    {
        cin>>weight[i];
    }
    
    ll u,v;
    f(i,0,n-1)
    {
        cin>>u>>v;
        pointsto.insert({v,u});
    }
    pointsto.insert({1,1});
    while(q--)
    {
        one.clear();
        two.clear();
        cin>>u>>v;
        weightv(v);
        weightu(u);
        ll ans=0;
        for(int i=0;i<one.size();i++)
        {
            ans=(ans+(one[i]*two[i])%m)%m;
        }
        cout<<ans<<endl;
    }
}



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
