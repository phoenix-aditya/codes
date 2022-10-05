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
ll findans(ll n, ll h[]){
    ll ans=0;
    ll starindex=0;
    ll starheight=h[0];
    ll paparazziheight=0;
    ll paparazziindex=-1;
    
    while(starindex<n-1){
            for(ll i=starindex+1;i<n;i++){
                if(paparazziindex==-1){
                    paparazziindex=i;
                    paparazziheight=h[i];
                    ans=max(ans,paparazziindex-starindex);
                    continue;
                }
                double slope=double(1.0*(h[i]-starheight)/(i-starindex));
          //  cout<<"slope: "<<slope<<endl;
            
                double heightpap=starheight+double(1.0*slope*(paparazziindex-starindex));
            
          //  cout<<"heightpap:  "<<heightpap<<endl;
            
                if(heightpap<paparazziheight){
                    continue;
                }
                paparazziheight=h[i];
                paparazziindex=i;
               // cout<<starheight<<" "<<paparazziheight<<endl;
                ans=max(ans,paparazziindex-starindex);
            }
        starindex=paparazziindex;
        starheight=h[paparazziindex];
        paparazziheight=0;
        paparazziindex=-1;
    }
        
    
    
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    ll h[n];
    
    f(i,0,n)cin>>h[i];
    
    if(n==2){
        cout<<1<<endl;
        return;
    }
    
    cout<<findans(n, h)<<endl;
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
    solve();
    
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
