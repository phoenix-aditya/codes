#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
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
    ll n,U,R,D,L;
    cin>>n>>U>>R>>D>>L;
    ll safe=n-2;
    vector<vector<ll>> corners;
    corners.push_back({0,0,0,0});corners.push_back({0,0,0,1});
    corners.push_back({0,0,1,0});corners.push_back({0,0,1,1});
    corners.push_back({0,1,0,0});corners.push_back({0,1,0,1});
    corners.push_back({0,1,1,0});corners.push_back({0,1,1,1});
    corners.push_back({1,0,0,0});corners.push_back({1,0,0,1});
    corners.push_back({1,0,1,0});corners.push_back({1,0,1,1});
    corners.push_back({1,1,0,0});corners.push_back({1,1,0,1});
    corners.push_back({1,1,1,0});corners.push_back({1,1,1,1});
    
    for(auto x:corners){
        ll  u=U,r=R,l=L,d=D;
        if(x[0]==1){
            u--;
            r--;
        }
        if(x[1]==1){
            r--;
            d--;
        }
        if(x[2]==1){
            d--;
            l--;
        }
        if(x[3]==1){
            l--;
            u--;
        }
        if(u<=safe && u>=0 && r<=safe && r>=0 && l<=safe && l>=0 && d<=safe && d>=0){
            cout<<"YES\n";return;
        }
    }
    cout<<"NO\n";
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

