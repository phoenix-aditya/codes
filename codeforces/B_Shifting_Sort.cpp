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
void printqueue(queue<ll> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void solve()
{
    ll n;
    cin>>n;

    ll arr[n];
    f(i,0,n) cin>>arr[i];
    vector< vector<int> > ans;
    for(int i=n-1;i>0;i--){
        ll maxpos=-1;
        ll maxele=LLONG_MIN;

        for(int j=0;j<=i;j++){
            if(arr[j]>maxele){
                maxele=arr[j];
                maxpos=j;
            }
        }
        if(maxpos<i){
            vector<int> tt;
            tt.push_back(maxpos+1);
            tt.push_back(i+1);
            tt.push_back(1);
            ans.push_back(tt);
            //cout<<maxpos<<" "<<i<<" "<<1<<endl;
            queue<ll> q;
            for(int j=maxpos;j<=i;j++){
                q.push(arr[j]);
            }
           // cout<<"here 1: ";printqueue(q);
            ll zzz;
            if(!q.empty()){
                zzz=q.front();
                q.pop();
                q.push(zzz);
            }
          //  cout<<"here 2: ";printqueue(q);

            for(int j=maxpos;j<=i;j++){
                if(!q.empty()){
                zzz=q.front();
                q.pop();
                arr[j]=zzz;
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}