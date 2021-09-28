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

unordered_map<ll,ll> counter;
const ll mxn=200005;
ll a[mxn];
void solve()
{
    counter.clear();
    
    ll n, total=0, ans=0;
    cin>>n;
    
    f(i,0,n)
    cin>>a[i];
    
    for(ll z=0;z<n;z++)
    {
        total+=a[z];
        
        if(total==0 || counter.count(total)>0)
        {
            counter.clear();
            ans++;
            total=a[z];
        }
        counter[total]=z;
    }
    cout<<ans<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    solve();
    
    return 0;
}
