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

struct point{
    double x;
    double y;
};
void solve(){
    point a, b, c;
    cin>>a.x>>a.y;
    cin>>b.x>>b.y;
    cin>>c.x>>c.y;

    double ans=0;

    if(a.y == b.y && a.y!=0 && c.y<a.y){
        ans = abs(a.x-b.x);
    }else if(b.y == c.y && b.y!=0 && a.y<b.y){
        ans = abs(b.x-c.x);
    }else if(a.y == c.y && a.y!=0 && b.y<a.y){
        ans = abs(a.x-c.x);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}