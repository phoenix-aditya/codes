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
    ll n,x;
    cin>>n>>x;
    ll w[n];
    ll sum=0;
    f(i,0,n){
        cin>>w[i];
        sum+=w[i];
    }
    if(sum==x){
        cout<<"NO\n";
        return;
    }
    
    sort(w, w+n);
    
    ll currsum=0;
    for(int i=0;i<n;i++){
        currsum+=w[i];
        if(currsum==x){
            swap(w[i], w[n-1]);
            break;
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    cout<<w[i]<<" ";
    cout<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}

