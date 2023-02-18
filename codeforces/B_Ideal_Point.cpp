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
int countMap[51];

void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> segments;
    int t1,t2;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        if(t1<=k && k<=t2){
            segments.push_back({t1,t2});
            for(int i=t1;i<=t2;i++){
                countMap[i]++;
            }
        }
    }
    int maxele = countMap[k];
    for(int i=1;i<=50;i++){
        if(countMap[i]>=maxele && i!=k){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    fast;
    wh(t){
        memset(countMap, 0, sizeof(countMap));
        solve();
    }
    
    return 0;
}