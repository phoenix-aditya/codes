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
    int n;
    cin>>n;

    int arr[n];
    f(i,0,n) cin>>arr[i];

    if(arr[0]==1){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}