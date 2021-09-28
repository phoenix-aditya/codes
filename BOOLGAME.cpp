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

int main()
{
    wh(t){
        ll n,m,k,a,b,c;
        cin>>n>>m>>k;
        
        ll g[n+1];
        vector<vector<pair<ll, ll>>> arr(n+1);
        vector<vector<pair<ll, ll>>> t(n+1);
        
        f(i,0,n){
            cin>>g[i+1];
        }
        t[0].push_back({0,0});
        
        f(i,0,m){
            cin>>a>>b>>c;
            
            pair<ll, ll> zeta={i,c};
            arr[a].push_back(zeta);
            arr[b].push_back(zeta);
        }
        
        vector<pair<ll, ll>> zozo;
        set<ll> s1;
        set<ll> s2;
        
        ll p,q,r;
        
        for(int i=1;i<=n;i++){
            zozo.clear();
            s1.clear();
            s2.clear();
            p=0;
            q=0;
            r=0;
            
            zozo.insert(zozo.end(), t[i-1].begin(),t[i-1].end());
            
            for(int j=i;j>0;j--){
                r^=1LL<<j;
                q+=g[j];
                
                for(auto x:arr[j]){
                    if(s1.count(x.first))q+=x.second;
                    else s1.insert(x.first);
                }
                
                if(j<2){
                    zozo.push_back({q,r});
                }
                
                else{
                    for(auto x: t[j-2]){
                        ll h=x.first+q;
                        ll gojo=r^x.second;
                        zozo.push_back({h,gojo});
                    }
                }
            }
            sort(zozo.begin(), zozo.end());
            reverse(zozo.begin(), zozo.end());
            
            for(auto x: zozo){
                if(p>=k)break;
                
                if(!s2.count(x.second)){
                    p++;
                    s2.insert(x.second);
                    t[i].push_back(x);
                }
            }
        }
        f(i,0,k){
            cout<<t[n][i].first<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}



