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
    ll n;
    cin>>n;
    
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    if(n==3){
        cout<<2<<" "<<9<<" "<<7<<endl;
        cout<<4<<" "<<6<<" "<<3<<endl;
        cout<<1<<" "<<8<<" "<<5<<endl;
        return;
    }
    ll arr[n][n];
    memset(arr, 0, sizeof(arr));
    
    ll num=1;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i+=2){
            arr[i][j]=num;
            num++;
        }
    }
    for(int j=0;j<n;j++){
        for(int i=1;i<n;i+=2){
            arr[i][j]=num;
            num++;
        }
    }
    
    f(i,0,n){
        f(j,0,n){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
