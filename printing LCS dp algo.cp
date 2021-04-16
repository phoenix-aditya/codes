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
set<char> ans;
//aditya ranaut- phoenix_aditya
void longestcommonsubsequenceprint(string s1, string s2){
    int n=s1.size();
    int m=s2.size();

    int t[n+1][m+1];
    memset(t, 0, sizeof(t));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i]==s2[j]){
                t[i][j]=1+t[i-1][j-1];
            }else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    
    string ans="";
    int i=n,j=m;
    
    while(i>=0 && j>=0){
        if(s1[i-1]==s2[j-1]){
            ans+=s1[i-1];
            i--;
            j--;
        }else{
            if(t[i-1][j]>t[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    
    longestcommonsubsequenceprint(s1, s2);
}



int main()
{
    speed;
    solve();
    
    return 0;
}

