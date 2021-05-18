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
vector<ll> occupied;
vector<ll> empty;
const int mxn=5005;

ll t[mxn][mxn];

ll dp(ll i, ll j){
    if(i>=occupied.size())
        return 0;
    if(j>=empty.size())
        return INT_MAX;
    
    if(t[i][j]!=-1)
        return t[i][j];
    t[i][j]=min(abs(occupied[i]-empty[j])+dp(i+1,j+1),dp(i,j+1));
   return t[i][j];
}

void solve()
{
    ll n;
    cin>>n;
    
    ll a[n];
    for(int i=0;i<mxn;i++){
        for(int j=0;j<mxn;j++)
        t[i][j]=-1;
    }
    f(i,0,n){
        cin>>a[i];
        if(a[i]==1)
            occupied.push_back(i);
        else
            empty.push_back(i);
    }
    cout<<dp(0,0)<<endl;
}

int main()
{
    speed;
    solve();
    
    return 0;
}
