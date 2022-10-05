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
    vector<ll> a;
    map<ll,bool> b;
    
    ll n;
    cin>>n;
    ll temp;
    for(int i=0;i<2*n;i++)
    {
        cin>>temp;
        
        if(!b[temp])
            a.push_back(temp);
        
        b[temp]=true;
    }
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
