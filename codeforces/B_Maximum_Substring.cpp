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
    string arr;
    cin>>arr;
    ll max1 = 0, max0 = 0;
    ll togetherOnes = 0;
    ll togetherZeroes = 0;
    ll total0 =0, total1 = 0;

    for(ll i=0;i<n;i++){
        if(arr[i] == '0'){
            max1 = max(max1, togetherOnes);
            togetherOnes = 0;
            total0++;
            togetherZeroes++;
        }
        if(arr[i] == '1'){
            max0 = max(max0, togetherZeroes);
            togetherZeroes = 0;
            total1++;
            togetherOnes++;
        }
    }
    max1 = max(max1, togetherOnes);
    max0 = max(max0, togetherZeroes);

    ll a = max1*max1;
    ll b = max0*max0;
    ll c = total0*total1;
    cout<< max(a, max(b,c))<<endl;

}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}