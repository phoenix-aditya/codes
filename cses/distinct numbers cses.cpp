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
    int n;
    cin>>n;
    set<ll> numbers;
    ll a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        numbers.insert(a);
    }
    cout<<numbers.size();
}



int main()
{
    speed;
    solve();
    
    return 0;
}
