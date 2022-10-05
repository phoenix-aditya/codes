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
    ll n,m,k;
    cin>>n>>m>>k;
    
    ll ans=0;
    if(n==m){
        for(int i=1;i<=n;i++){
            ans^=(k+2*i);
        }
    }
    else{
        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    ans^=(k+i+1);
                }
                else{
                    ans^=(k+i+m);
                }
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(i%2!=0){
                    ans^=(k+i+1);
                }
                else{
                    ans^=(k+i+m);
                }
            }
            for(int i=1;i<=m;i++){
                ans^=(k+n+i);
            }
        }
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
