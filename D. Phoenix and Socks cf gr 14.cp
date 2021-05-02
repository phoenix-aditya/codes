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
    ll n,l,r;
    cin>>n>>l>>r;
    // first = colour
    // second = left sock
    // third= right sock
    
    map<ll, pair<ll,ll>> socks;
    ll mincost=0;
    ll temp;
    ll made=0;
    for(int i=0;i<n;i++){
        if(i<l){
            cin>>temp;
            if(socks.find(temp)==socks.end()){
                socks.insert({temp,{1,0}});
            }else{
                socks[temp].first++;
            }
        }else{
            cin>>temp;
            if(socks.find(temp)==socks.end()){
                socks.insert({temp,{0,1}});
            }else{
                socks[temp].second++;
            }
        }
    }
    
//    for(auto x: socks){
//        cout<<"colour: "<<x.first<<" left: "<<x.second.first<<" right: "<<x.second.second<<endl;
//    }cout<<endl;
    
    for(auto &x: socks){
        int zz=min(x.second.first, x.second.second);
        made+=zz;
        x.second.first-=zz;
        x.second.second-=zz;
        l-=zz;
        r-=zz;
    }
    
    for(auto &x: socks){
        while(x.second.first>=2){
            if(l>r){
                x.second.first-=2;
                mincost++;
                made++;
                l-=2;
            }else{
                break;
            }
        }
        while(x.second.second>=2){
            if(r>l){
                x.second.second-=2;
                made++;
                mincost++;
                r-=2;
            }else{
                break;
            }
        }
    }
        n/=2;
        mincost+=(n-made);
        l=abs(r-l);
        l/=2;
        
        mincost+=l;
    
//    for(auto x: socks){
//        cout<<"colour: "<<x.first<<" left: "<<x.second.first<<" right: "<<x.second.second<<endl;
//    }cout<<endl;
//
    
    
    cout<<mincost<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}

