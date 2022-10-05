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
const int mx = 1002;
bool vis[mx][mx];
char arr[mx][mx];
int ans = 0;

void map_room(int i, int j, int n, int m){
    if(i<0 || i>=n || j<0 || j>=m || arr[i][j]=='#' || vis[i][j]){
        return;
    }
    vis[i][j] = true;
    map_room(i+1, j, n, m);
    map_room(i-1, j, n, m);
    map_room(i, j+1, n, m);
    map_room(i, j-1, n, m);
}

void solve(){
    int n,m;
    cin>>n>>m;
    memset(vis, 0, sizeof(vis));
    ans = 0;

    f(i,0,n){
        f(j,0,m){
            cin>>arr[i][j];
        }
    }
    f(i,0,n){
        f(j,0,m){
            if(vis[i][j] != true && arr[i][j]=='.'){
                ans++;
                map_room(i,j,n,m);
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast;
    solve();
    
    return 0;
}