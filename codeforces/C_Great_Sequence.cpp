#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define wh(t) ll t;cin>>t;while(t--)
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define f(i,a,b) for(ll i=a;i<b;++i)

// aditya ranaut - phoenix_aditya


void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n];

    map<ll,ll> freq;

    f(i,0,n){ 
        cin>>a[i];
        if(!freq[a[i]]){
            freq[a[i]]=1;
        }else{
            freq[a[i]]++;
        }
    }
    ll ans=0;
    for(auto zz: freq){
        freq[zz.first] = min(zz.second, freq[zz.first*x]);
        freq[zz.first*x]-= min(zz.second, freq[zz.first*x]);
    }

    for(auto zz: freq){
        ans+=zz.second;
    }
    cout<<ans<<endl;

}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}