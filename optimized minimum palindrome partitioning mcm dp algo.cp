#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
const int mxn=1e3+3;
int memo[mxn][mxn];

bool  ispalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])
            return false;
    }
    return true;
}

int palinpartition(string s, int i, int j){
    if(i>=j)
        return 0;
    if(ispalindrome(s.substr(i,j-i+1)))
        return 0;
    if(memo[i][j]!=-1)
        return memo[i][j];
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        if(memo[i][k]==-1) memo[i][k]=palinpartition(s, i, k);
        if(memo[k+1][j]==-1) memo[k+1][j]=palinpartition(s, k+1, j);
        
        int temp= 1+memo[i][k]+memo[k+1][j];
        ans=min(ans, temp);
    }
    return memo[i][j]=ans;
}

int main()
{
    memset(memo, -1, sizeof(memo));
    string s;
    cin>>s;
    cout<<palinpartition(s, 0, s.length()-1)<<endl;
    return 0;
}
