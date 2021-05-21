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
    
    string s;
    cin>>s;
    
    int noofzeroes=0;
    
    if(n%2==0){
        cout<<"BOB\n";
        return;
    }
    for(char c: s){
        if(c=='0')
            noofzeroes++;
    }
    if(noofzeroes==0){
        cout<<"DRAW\n";
    }
    else if(s[n/2]=='0' && noofzeroes==1){
        cout<<"BOB\n";
    }
    else if(s[n/2]=='0' && noofzeroes>1){
        cout<<"ALICE\n";
    }
    else{
        cout<<"BOB\n";
    }
}
 
 
 
int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
