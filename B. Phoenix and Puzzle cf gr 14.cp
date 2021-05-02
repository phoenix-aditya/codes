#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya


void solve()
{
    ll n,triangle,sq;
    cin>>n;
    
    if(n%2==0){
        triangle=n/2;
        sq=sqrt(triangle);
        
        if(sq*sq==triangle){
            cout<<"YES\n";
            return;
        }
    }
    
    if(n%4==0){
        triangle=n/4;
        
        sq=sqrt(triangle);
        
        if(sq*sq==triangle){
            cout<<"YES\n";
            return;
        }
    }
    
    
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}

