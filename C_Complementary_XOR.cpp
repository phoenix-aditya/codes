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
bool stringXor(string a, string b){
    int onecount = 0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            onecount++;
        }
    }
    return onecount==a.length();
}

void solve(){
    int n;
    cin>>n;

    string a,b;
    cin>>a;
    cin>>b;
    if(!stringXor(a,b)){
        cout<<"NO\n";
        return;
    }


}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}