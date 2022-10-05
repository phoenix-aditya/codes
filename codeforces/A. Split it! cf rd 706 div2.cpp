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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    if(k>(n-1)/2){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<k;i++){
        if(s[i]!=s[s.size()-(i+1)]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
