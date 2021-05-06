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
int digits(ll n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
void solve()
{
    ll n;
    cin>>n;
    ll numdigi=digits(n);
    ll ans=(numdigi-1)*9;
    
    ll curr=1;
    for(int i=1;i<numdigi;i++){
        curr*=10;
        curr++;
    }
    for(int i=1;i<=9;i++){
        if(curr*i>n){
            break;
        }else{
            ans++;
        }
    }
    cout<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
