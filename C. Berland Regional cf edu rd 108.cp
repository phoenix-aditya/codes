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
    ll n;
    cin>>n;
    vector<ll> zozo;
    vector<vector<ll>> uni(n+1,zozo);
    
    vector<pair<ll,ll>> inp;
    ll temp;
    f(i,0,n){
        cin>>temp;
        inp.push_back({temp,0});
    }
    f(i,0,n){
        cin>>temp;
        inp[i].second=temp;
    }
    
    f(i,0,n){
        uni[inp[i].first].push_back(inp[i].second);
    }
    f(i,0,n+1){
        sort(uni[i].begin(), uni[i].end());
    }
    
    ll ans[n+1];
    memset(ans, 0LL, sizeof(ans));
    //cout<<"ans: "<<ans[n/2]<<endl;
//    for(int i=1;i<=n;i++){
//        cout<<"uni:"<<i<<": ";
//        for(int j=0;j<uni[i].size();j++){
//            cout<<uni[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<uni[i].size();j++){
            uni[i][j]+=uni[i][j-1];
        }
    }
//
//    for(int i=1;i<=n;i++){
//        cout<<"uni:"<<i<<": ";
//        for(int j=0;j<uni[i].size();j++){
//            cout<<uni[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    for(int i=1;i<=n;i++){
        
//        cout<<"uni "<<i<<": ";
//        for(int j=0;j<uni[i].size();j++){
//            cout<<uni[i][j]<<" ";
//        }
//        cout<<endl;
        
        if(uni[i].size()==0)
            continue;
        
        for(int k=1;k<=uni[i].size();k++){
//            cout<<"k: "<<k<<endl;
            ll total=uni[i].size();
            
            ll totake=total/k;
            totake*=k;
            
            ll left=total-totake;
            
//            cout<<"totake: "<<totake<<endl;
//            cout<<"total: "<<total<<endl;
//            cout<<"left: "<<left<<endl;
            ll zeto=0;
            if(left==0){
                zeto=uni[i][uni[i].size()-1];
                ans[k]+=zeto;
            }else{
                zeto=(uni[i][uni[i].size()-1]-uni[i][left-1]);
                ans[k]+=zeto;
            }
//            cout<<"zeto: "<<zeto<<endl;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}



int main()
{
    speed;
    wh(t)
    {solve();}
    
    return 0;
}
/*
 1
 20
 20 20 16 16 16 16 20 20 20 16 20 20 20 20 20 16 20 20 20 20
 12 16 8 9 10 12 17 18 3 16 17 9 13 20 2 13 14 18 4 4
 */
