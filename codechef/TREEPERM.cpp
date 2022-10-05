#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define MOD 1000000007

//aditya ranaut- phoenix_aditya
const int mxn=1e6+6;
vector<ll> tree[mxn];
priority_queue<pair<ll, ll>> qu;
ll temp=0;

vector<ll> sova;
ll a1[mxn];
ll a2[mxn];
ll b1[mxn];
ll b2[mxn];
ll vis[mxn];
ll papa[mxn];
ll depth[mxn];
ll contra[mxn];

//ok
void check(ll zeta){
    if(contra[zeta]!=0){
        if(a2[zeta]==b2[zeta]){
            contra[zeta]--;
            temp--;
        }
    }
    else{
        contra[zeta]++;
        temp++;
    }
}

void maketree(ll t1, ll t2){
    bool flag=true;
    depth[t1]=t2;
    vis[t1]++;
   
    for(ll x:tree[t1]){
        if(vis[x]==false){
            flag=false;
            papa[x]=t1;
            maketree(x,t2+1);
        }
    }
    if(flag==true){
        qu.push({t2,t1});
    }
}

//ok
ll func(ll x){
    a2[a1[x]]++;
    b2[b1[x]]++;
    check(a1[x]);
    check(b1[x]);
    sova.push_back(x);
    vis[x]++;
    
    
    ll ret=0;
    
    if(temp==0){
        if(vis[papa[x]]==0 && x!=1){
            qu.push({depth[papa[x]],papa[x]});
        }
        ret=1;
    }
    else if(vis[papa[x]]==0){
        if(func(papa[x])){
            ret=1;
        }
    }
    contra[a1[x]]=0;
    contra[b1[x]]=0;
    a2[a1[x]]=0;
    a2[b1[x]]=0;
    b2[a1[x]]=0;
    b2[b1[x]]=0;
    
    return ret;
}

int main()
{
    wh(t){
        ll n,k;
        cin>>n>>k;
        
        for(int i=0;i<=n+1;i++){
            tree[i].clear();
        }
        temp=0;
        for(int i=0;i<=n+1;i++){
            a1[i]=0;
            b1[i]=0;
            a2[i]=0;
            b2[i]=0;
            vis[i]=0;
            papa[i]=0;
            depth[i]=0;
            contra[i]=0;
        }
        while(qu.size()!=0){
            qu.pop();
        }
        
        f(i,0,n-1){
            ll u,v;
            cin>>u>>v;
            
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        f(i,0,n)cin>>a1[i+1];
        f(i,0,n)cin>>b1[i+1];
        
        
        maketree(1, 1);
        
        for(int i=0;i<=n+1;i++)vis[i]=0;
        
        bool co=true;
        vector<vector<ll>> ss;
        pair<ll,ll> node;
        
        while(!qu.empty()){
            
            node=qu.top();
            qu.pop();
            
            if(vis[node.second]==0){
                sova.clear();
                temp=0;
                if(func(node.second)==0){
                    co=false;
                    break;
                }
                else{
                    ss.push_back(sova);
                }
            }
        }
        
    //    cout<<"here: ";
    //    for(auto x: ss){
    //        for(auto y: x){
    //            cout<<y<<" ";
    //        }
    //        cout<<endl;
    //    }
        
        if(k==1){
            if(co)cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            ll ans=0;
            if(co){
                ans=1;
                for(auto x: ss){
                    ll u=x[0];
                    ll v=x[0];
                    ll counter=0;
                    
                    for(int j=0;j<x.size();j++){
                        if(j<=0){
                            
                        }
                        else{
                            if(depth[x[j]]>depth[u]){
                                v = x[j];
                            }
                            if(depth[x[j]]<depth[u]){
                                u = x[j];
                            }
                        }
                    }
                    
                    for(auto x: tree[v]){
                        if(x!=papa[v]){
                            counter++;
                        }
                    }
                    counter++;
                    ans=(ans*counter)%MOD;
                }
                cout<<ans<<endl;
                continue;
            }
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}


