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

    vector<ll> temp;
    for(int i=n;i>0;i--){
        temp.push_back(i);
    }
    vector< vector<ll> > ans;
    ans.push_back(temp);
    for(int i=n-1;i>0;i--){
        swap(temp[i], temp[i-1]);
        ans.push_back(temp);
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    fast;

    wh(t)
        solve();
    
    return 0;
}