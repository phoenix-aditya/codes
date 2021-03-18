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
    
    if(k==3){
        if(n%2==0){
            ll zeta=n/2;
            if(zeta%2==0){
                cout<<zeta<<" "<<zeta/2<<" "<<zeta/2<<endl;
            }
            else{
                cout<<zeta-1<<" "<<zeta-1<<" "<<2<<endl;
            }
        }
        
        else{
            cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
        }
    }
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
