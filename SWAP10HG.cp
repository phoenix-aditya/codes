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
    int n;
    cin>>n;
    string s;
    string p;
    cin>>s;
    cin>>p;
    
    int onesins=0;
    int onesinp=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            onesins++;
        if(p[i]=='1')
            onesinp++;
    }
    if(onesins==onesinp)
    {
        int tochange=0;
        int zeroes=0;
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0' && s[i]!=p[i])
                zeroes++;
            
            if(s[i]=='1' && s[i]!=p[i]){
                if(zeroes==0){
                    cout<<"No\n";
                    return;
                }
            }
            
        }
        cout<<"Yes\n";
    }
    else
        cout<<"No\n";
        
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
