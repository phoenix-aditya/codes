#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya


void solve()
{
    int n;
    cin>>n;
    int t[n+1];
    t[0]=0;
    for(int i=0;i<=9;i++){
        t[i]=1;
    }
    t[0]=0;
    for(int i=10;i<=n;i++){
        t[i]=1e6+6;
    }
    for(int i=10;i<=n;i++){
        int temp=i;
        while(temp>0){
            int digi=temp%10;
            t[i]=min(t[i-digi]+1,t[i]);
            temp/=10;
        }
    }
    
//    for(int i=0;i<=n;i++)cout<<t[i]<<" ";
//    cout<<endl;
    
    cout<<t[n];
}



int main()
{
    speed;
    solve();
    
    return 0;
}
