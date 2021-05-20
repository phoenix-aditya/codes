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
string a,b;
const int mxn=5e3+3;
int dp[mxn][mxn];
int editdistance(int n, int m){
    f(i,0,n+1){
        f(j,0,m+1){
            if(i==0)
                dp[i][j]=j;
            if(j==0)
                dp[i][j]=i;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int t1=dp[i-1][j]+1;
            int t2=dp[i][j-1]+1;
            int t3=dp[i-1][j-1]+((a[i-1]==b[j-1])?0:1);
            dp[i][j]=min(t1, min(t2, t3));
        }
    }
    return dp[n][m];
}
void solve()
{
    cin>>a;
    cin>>b;
    
    int n=a.size();
    int m=b.size();
    cout<<editdistance(n, m)<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
