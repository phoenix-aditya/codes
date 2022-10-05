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
    ll k, n;
    cin>>n>>k;

    ll arr[k];
    f(i,0,k){
        cin>>arr[i];
    }
    
    vector<ll> ans;
    for(int i=0;i<n;i++){
        ans.push_back(i+1);
    }
    reverse(ans.begin(), ans.begin()+arr[0]);
    for(int i=1;i<k;i++){
        reverse(ans.begin()+arr[i-1], ans.begin()+arr[i]);
    }

    
    
    f(i,0,n){
        cout<<ans[i]<<" ";
    }cout<<endl;

}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}