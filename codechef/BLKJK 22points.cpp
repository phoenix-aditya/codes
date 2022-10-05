#include<bits/stdc++.h>
#define ll long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


//aditya ranaut- phoenix_aditya
const int mxn=1e3+3;
ll arr[mxn];

void solve()
{
    ll n, x, y;
    cin>>n>>x>>y;
    
    
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        }
    
    ll sum=0;
    
    for(ll i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=x && sum<=y){
            cout<<0<<endl;
            return;
        }
        if(sum>y)
            break;
    }
    
    sum=0;
    
    for(ll a=0;a<n-1;a++){
        sum=sum+arr[a];
        for(ll b=0;b<=a;b++){
            for(ll c=a+1;c<n;c++){
                if((arr[c]>=(arr[b]+(x-sum))) && (arr[c]<=(arr[b]+(y-sum))))
                {cout<<1<<endl;return;}
            }
        }
    }
    
    sum=0;
    
    for(ll a=0;a<n-2;a++){
        sum+=arr[a];
        
        for(ll b=0;b<=a;b++){
            for(ll c=b+1;c<=a;c++){
                
                ll zeta=arr[b]+arr[c];
                
                for(ll d=c+1;d<n;d++){
                    for(ll e=d+1;e<n;e++){
                        ll hi=arr[d]+arr[e];
                        if (hi>=zeta+(x-sum) && hi<=zeta+(y-sum)){
                            cout<<2<<endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    
    cout<<-1<<endl;
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
