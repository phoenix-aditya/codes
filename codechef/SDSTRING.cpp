#include<bits/stdc++.h>
#include<chrono>
#include<string.h>

#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
  
void solve(){
    string s;
    cin>>s;
    
    int n=s.length();
    
    int onecount=0;
    int zerocount=0;
    
    for(char c:s){
        if(c=='1')
            onecount++;
        else
            zerocount++;
    }
    if(n%2!=0){cout<<-1<<endl;return;}
    
    else if(onecount>0 && zerocount>0)
    cout<<abs(onecount-zerocount)/2<<endl;
    else
        cout<<-1<<endl;
}

int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
