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
    string a;
    string b;
    cin>>a>>b;
    
    int ans=0;
    int length=a.length();
    bool checker=false;

    for(int i=0;i<length;i+=2)
    {
        if(a[i]==b[i])
        {
            checker=false;
        }
        if(a[i]!=b[i] && !checker)
        {ans++;checker=true;}
    }
    checker=false;
    for(int i=1;i<length;i+=2)
    {
        if(a[i]==b[i])
        {
            checker=false;
        }
        if(a[i]!=b[i] && !checker)
        {ans++;checker=true;}
    }
    cout<<ans<<endl;
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
