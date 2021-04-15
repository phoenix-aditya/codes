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

//dp approach of longest common subsequence algo
const int mxn=1e3+3;
int t[mxn][mxn];
void initializememo(int n, int m){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            t[i][j]=-1;
        }
    }
}
int longestcommonsubsequencememo(string s1, string s2, int n, int m){
    if(n==0 || m==0){
        return t[n][m]=0;
    }
    if(s1[n-1]==s2[m-1]){
        if(t[n][m]!=-1)
            return t[n][m];
        else
            return t[n][m]=1+longestcommonsubsequencememo(s1, s2, n-1, m-1);
    }
        else{
            int first;
            if(t[n][m-1]!=-1){
                first=t[n][m-1];
            }else{
                first=longestcommonsubsequencememo(s1, s2, n, m-1);
                t[n][m-1]=first;
            }
            int second;
            if(t[n-1][m]!=-1){
                second=t[n-1][m];
            }else{
                second=longestcommonsubsequencememo(s1, s2, n-1, m);
                t[n-1][m]=second;
            }
            return t[n][m]=max(first,second);
        }
}


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    initializememo(s1.size(), s2.size());
    cout<<longestcommonsubsequencememo(s1, s2,s1.size(),s2.size())<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
