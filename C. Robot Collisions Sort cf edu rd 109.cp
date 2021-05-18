#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=3e5+5;
ll ans[mxn];
ll direction[mxn];

void func(vector<pair<ll,ll>> &v, ll m){
    stack<pair<ll,ll>> s;
    for(auto x: v){
        if(direction[x.second]==0){
            if(s.size()==0){
                s.push({-1*x.first,x.second});
            }
            else{
                auto zeta=s.top();
                ll t=(x.first-zeta.first)/2;
                ans[x.second]=t;
                ans[zeta.second]=t;
                s.pop();
            }
        }
        else{
            s.push({x.first,x.second});
        }
    }
    while(s.size()>1){
        
        auto x=s.top();
        s.pop();
        auto y=s.top();
        s.pop();
        ll t=(m+m-x.first-y.first)/2;
        ans[x.second]=t;
        ans[y.second]=t;
    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    vector<pair<ll,ll>> odd;
    vector<pair<ll,ll>> even;
    ll temp;
    for(int i=1;i<=n;i++){
        ans[i]=-1;
        cin>>temp;
        if(temp%2==0){
            even.push_back({temp,i});
        }else{
            odd.push_back({temp,i});
        }
    }
    char c;
    for(int i=1;i<=n;i++){
        cin>>c;
        if(c=='R')
            direction[i]=1;
        else
            direction[i]=0;
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    
    func(odd,m);
    func(even,m);
    
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}

int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
