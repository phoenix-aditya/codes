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

void solve()
{
    ll n;
    cin>>n;
    
    ll a[n];
    ll b[n];
    f(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b, b+n);
    ll startindex=0;
    ll endindex=n-1;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            startindex=i;
            continue;
        }
        else{
            startindex=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==b[i]){
            endindex=i;
            continue;
        }
        else{
            endindex=i;
            break;
        }
    }
    //cout<<startindex<<" "<<endindex<<endl;
    if(endindex==0 && startindex==n-1){
        cout<<0<<endl;
        
    }else if(a[n-1]==1 && a[0]==n){
        cout<<3<<endl;
    }else if(startindex==0 && endindex==n-1){
        cout<<2<<endl;
    }else
        cout<<1<<endl;
}

int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
