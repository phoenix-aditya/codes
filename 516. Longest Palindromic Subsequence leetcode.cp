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
int longestPalindromeSubseq(string s) {
    string s1=s;
    string s2=s;
    
    reverse(s2.begin(), s2.end());
    int n=s1.length();
    int m=s2.length();
    
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    speed;
    cout<<longestPalindromeSubseq("aacabdkacaa");
    
    return 0;
}

