#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya


void solve()
{
    ll n,m,x;
    cin>>n>>m>>x;
    
    vector<pair<ll,ll>> heights;
    ll temp;
    f(i,0,n){
        cin>>temp;
        heights.push_back({temp,i});
    }
    sort(heights.begin(), heights.end());
    
    ll assigned[n];
    vector<pair<ll,ll>> total;
    
    for(int i=1;i<=m;i++){
        total.push_back({0,i});
    }
    ll counter=1;
    
    for(auto xoxo: heights){
        assigned[xoxo.second]=total[counter-1].second;
        total[counter-1].first+=xoxo.first;
        counter+=1;
        if(counter>m){
            counter=1;
            //cout<<"run"<<endl;
            sort(total.begin(), total.end());
        }
    }
//    for(auto xoxo:total){
//        cout<<xoxo.first<<" "<<xoxo.second<<endl;
//    }
//
    if((total[m-1].first-total[0].first)>x){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<assigned[i]<<" ";
    }cout<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}

