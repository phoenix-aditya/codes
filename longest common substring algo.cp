#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
int longestcommonsubstring(string s1, string s2){
    int n=s1.size();
    int m=s2.size();
    int ans=0;
    
    int t[n+1][m+1];
    memset(t, 0, sizeof(t));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i]==s2[j]){
                t[i][j]=1+t[i-1][j-1];
                ans=max(ans, t[i][j]);
            }else{
                t[i][j]=0;
            }
        }
    }
    return ans;
}


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<longestcommonsubstring(s1, s2)<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
