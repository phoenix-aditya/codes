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
    int n;
    cin>>n;
    
    int a[n];
    vector<int> even;
    vector<int> odd;
    f(i,0,n){
        cin>>a[i];
        if(a[i]%2==0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    //cout<<even.size()+odd.size()<<endl;
    for(auto x: even)
        cout<<x<<" ";
    for(auto x: odd)
        cout<<x<<" ";
    cout<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
