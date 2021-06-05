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
    ll n,m;
    cin>>n>>m;
    string s1;
    cin>>s1;
    vector<int> s;
    f(i,0,n){
        if(s1[i]=='1')
            s.push_back(1);
        else
            s.push_back(0);
    }
    
    for(int i=0;i<min(n,m);i++){
        vector<int> temp=s;
        for(int j=0;j<n;j++){
            if(s[j]==1){
                if(j-1>0){
                    if(s[j-2]!=1){
                        temp[j-1]=1;
                    }
                }else{
                    if(j-1>=0)
                        temp[j-1]=1;
                }
                
                if((j+1)<(n-1)){
                    if(s[j+2]!=1){
                        temp[j+1]=1;
                    }
                }else{
                    if(j+1<n)
                        temp[j+1]=1;
                }
            }
        }
        s=temp;
    }
    
    
    f(i,0,n){
        cout<<s[i];
    }cout<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
