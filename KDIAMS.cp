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
    ll n,k;
    cin>>n>>k;
    
    ll zeta= n*(n-1);
    zeta/=2;
    
    if(zeta!=k && zeta-k<n-1)
    {
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,int>> pairs;
    
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++)
        {
            pairs.push_back({i,j});
        }
    }
    
    ll needed=zeta-k%zeta;
    cout<<needed<<endl;
    for(auto x:pairs){
        if(needed==0)
            break;
        cout<<x.first<<" "<<x.second<<endl;
        needed--;
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
