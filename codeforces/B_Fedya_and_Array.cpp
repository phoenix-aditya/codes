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
    ll a,b;
    cin>>a>>b;
    cout<<(a-b)*2<<endl;
    for(int i=a;i>=b;i--){
        cout<<i<<" ";
    }
    for(int i=b+1;i<a;i++){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    fast;
    wh(t)
        solve();

    return 0;
}
