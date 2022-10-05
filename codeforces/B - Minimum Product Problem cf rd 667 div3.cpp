#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll c1, c2;
    c1=max(0ll, n-a+x);
    c2=max(0ll,c1-b+y);
    
    ll case1= (a-n+c1)*(b-c1+c2);
    
    c1=max(0ll,n-b+y);
    c2=max(0ll,c1-a+x);
    
    ll case2=(b-n+c1)*(a-c1+c2);
    
    cout<<min(case2,case1)<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
    {solve();}
    
    return 0;
}
