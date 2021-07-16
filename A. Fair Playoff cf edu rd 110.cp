#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    
    if(min(s1,s2)>max(s3,s4)){
        cout<<"NO\n";
        return;
    }
    if(min(s3,s4)>max(s1,s2)){
        cout<<"NO\n";
        return;
    }
    
    
    cout<<"YES\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
