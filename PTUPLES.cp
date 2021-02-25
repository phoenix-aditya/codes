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
const int mxn=1e6+6;
bool composite[mxn]={0};
bool isprime[mxn]={0};
int sum[mxn]={0};

void gensieve(){
    for(int i=2;i<=mxn;i++)
    {
        if(composite[i])
        {
            sum[i]=sum[i-1];
            continue;
        }
        isprime[i]=true;
        
        if(isprime[i-2])
            sum[i]=sum[i-1]+1;
        else
            sum[i]=sum[i-1];
        
        for(int j=2*i;j<=mxn;j+=i)
            composite[j]=1;
    }
}

void solve()
{
    int n;
    cin>>n;
    cout<<sum[n]<<endl;
}



int main()
{
//        auto start = high_resolution_clock::now();
    speed;
    gensieve();
    //cout<<prime.size()<<endl;
    wh(t)
     {solve();}
    
//        auto stop = high_resolution_clock::now();
//        auto duration = duration_cast<microseconds>(stop - start);
//
//          cout << "Time taken by function: "
//               << duration.count()/1000000 << " microseconds" << endl;
    
    return 0;
}
