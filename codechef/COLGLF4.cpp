#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya


void solve()
{
    ll ans=-1,finalans=LLONG_MAX;
    ll n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    bool served=false;
    for(int i=0;i<=min(e,h) && i<=n;i++){
        
        ll mm=(h-i)/3;
        ll mo=(e-i)/2;
        ll left=n-i;
        if(mo+mm>=left){
            if(a<b){
                ll omletteserved=min(mo, left);
                left=left-omletteserved;
                ans=0;
                ans+=i*c;
                ans+=omletteserved*a;
                ans+=left*b;
                finalans=min(finalans, ans);
                served=true;
            }
            else{
                ll shakeserved=min(mm,left);
                left=left-shakeserved;
                ans=0;
                ans+=i*c;
                ans+=shakeserved*b;
                ans+=left*a;
                finalans=min(finalans, ans);
                served=true;
            }
        }
        
    }
    if(ans==-1)
    cout<<ans<<endl;
    else
        cout<<finalans<<endl;
    
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t){
    solve();
    }
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
