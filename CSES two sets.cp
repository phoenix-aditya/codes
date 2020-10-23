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

const int mxn=1e6+6;
bool numbers[mxn];

void solve()
{
    ll k;
    cin>>k;
    
    ll sum=k*(k+1)/2;
    if(sum%2!=0)
    {
        cout<<"NO\n";
        return;
    }
    vector<ll> ans1;
    vector<ll> ans2;
    
    sum=sum/2;
    
    for(ll i=k;i>=1;i--)
    {
        if(sum>=i)
        {
            sum-=i;
            numbers[i]=true;
            ans1.push_back(i);
        }
        else
        {
            if(!numbers[i])
            ans2.push_back(i);
        }
    }
    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(), ans2.end());
    
    cout<<"YES\n";
    cout<<ans1.size()<<endl;
    for(auto x: ans1)
        cout<<x<<" ";
    cout<<endl;
    
    cout<<ans2.size()<<endl;
    for(auto x: ans2)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    speed;
    solve();
    
    return 0;
}
