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
    vector<ll>a(n), b(n);
    f(i,0,n) cin>>a[i];
    f(i,0,n) cin>>b[i];

    vector<ll> prefix(n+1,0);
    prefix[0] = 0;
    f(i,1,n+1){
        prefix[i] = prefix[i-1]+b[i-1];
    }
    vector<ll> standardamt(n+1,0);
    vector<ll> additionalamt(n+1,0);

    for(int i=0;i<n;i++){
        int index = upper_bound(prefix.begin(), prefix.end(), a[i]+prefix[i]) - prefix.begin() -1;
        standardamt[i]+=1;
        standardamt[index]-=1;
        additionalamt[index]+=(a[i]-prefix[index]+prefix[i]);
    }
    for(int i=1;i<n;i++){
        standardamt[i] = standardamt[i-1]+standardamt[i];
    }
    for(int i=0;i<n;i++){
        cout<<standardamt[i]*b[i]+additionalamt[i]<<" ";
    }cout<<endl;
}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}