#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
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
    ll arr[n];
    
    f(i,0,n){
        cin>>arr[i];
    }
    
    bool check1=false;
    int end=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            check1=true;
            end=i+1;
            break;
        }
    }
    if(end==0){
        cout<<"YES\n0\n";
        return;
    }
    
    check1=false;
    for(int i=end;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            check1=true;
            break;
        }
    }
    
    if(!check1 && arr[0]>=arr[n-1]){
        cout<<"YES\n1\n";
        return;
    }
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
