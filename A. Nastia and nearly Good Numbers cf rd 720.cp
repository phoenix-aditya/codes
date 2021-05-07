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
    ll a,b;
    cin>>a>>b;
    
    
    ll num2=a*b;
    ll num3=a+num2;
    
    if(a==num2 || a==num3 || num2==num3){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<a<<" "<<num2<<" "<<num3<<endl;
}


int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
