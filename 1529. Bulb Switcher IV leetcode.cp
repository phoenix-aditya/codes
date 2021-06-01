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

int minFlips(string target) {
        string s=target;
        int flip=0;
        int ans=0;
        for(int i=0;i<target.length();i++){
            if(flip%2!=0){
                if(s[i]=='1') s[i]='0';
                else s[i]='1';
            }
            
            if(s[i]=='1'){
                flip++;
                ans++;
                s[i]='0';
            }
        }
        return ans;
    }

void solve()
{
    string s;
    cin>>s;
    cout<<minFlips(s)<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
