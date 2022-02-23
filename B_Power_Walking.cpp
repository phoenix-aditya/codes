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
    ll n;
    cin>>n;

    ll a[n];
    f(i,0,n) cin>>a[i];

    set<ll> powers;
    f(i,0,n) powers.insert(a[i]);

    ll dist = powers.size();
    for(int i=1;i<=n;i++){
        if(i<=dist){
            cout<<dist<<" ";
        }else{
            cout<<i<<" ";
        }
    }cout<<endl;

}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}