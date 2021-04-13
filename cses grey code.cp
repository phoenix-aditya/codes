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
    ll n;
    cin>>n;
    vector<string> l1;
    vector<string> l2;
    
    l1.push_back("");
    l2.push_back("");
    
    
    for(int i=2;i<=(1<<n);i=i<<1){
        l2=l1;
        reverse(l2.begin(), l2.end());
        
        for(int j=0;j<l1.size();j++){
            l1[j]="0"+l1[j];
        }
        for(int j=0;j<l2.size();j++){
            l2[j]="1"+l2[j];
        }
        l1.insert(l1.end(), l2.begin(),l2.end());
    }
    for(string x: l1)cout<<x<<endl;
    
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    solve();
    
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
