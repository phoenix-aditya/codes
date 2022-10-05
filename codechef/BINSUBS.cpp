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
    ll n=0;
    cin>>n;
    string s;
    cin>>s;
    int ans=100005;
    
    int maxone=0;
    int maxzero=0;
    int one=0;
    int zero=0;
    
    for(char x:s){
        if(x=='1')
            maxone++;
        else
            maxzero++;
    }
    if(maxzero==0 || maxone==0)
    {cout<<0<<endl;return;}
    
    for(int i=0;i<n;i++){
        if(s[i]=='0' && s[i+1]=='1'){
            ans=min(ans,one+(maxzero-zero)-1);
        }
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
    
    if(maxzero<ans)
        ans=maxzero;
    if(maxone<ans)
        ans=maxone;
    
    cout<<ans<<endl;
}



int main()
{
//        auto start = high_resolution_clock::now();
    speed;
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
