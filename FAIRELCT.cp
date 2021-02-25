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
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    ll a[n];
    ll b[m];
    
    ll sum1=0;
    ll sum2=0;
    
    f(i,0,n)
    {cin>>a[i];sum1+=a[i];}
    
    f(i,0,m)
    {cin>>b[i];sum2+=b[i];}
    
    sort(a, a+n);
    sort(b, b+m);
    reverse(b, b+m);
    
    if(sum1>sum2){
        cout<<0<<endl;
        return;
    }
    else{
        ll swaps=0;
        ll run=0;
        if(n>m)run=m;else run=n;
        for(int i=0;i<run;i++){
            if(sum1<=sum2)
            {   sum1-=a[i];
                sum1+=b[i];
                sum2-=b[i];
                sum2+=a[i];
                swaps++;
            }
            else
                break;
        }
        if(sum1<=sum2){
            cout<<-1<<endl;
            return;
        }
        cout<<swaps<<endl;
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
