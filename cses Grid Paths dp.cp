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
const int mxn=1e3+3;
char grid[mxn][mxn];
int ans=0;
int maxways(int n){
    int t[n+1][n+1];
    memset(t, 0, sizeof(t));
    t[0][0]=1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*')
            {t[i][j]=0;continue;}
            
            if(i>0)
                t[i][j]=(t[i][j]+t[i-1][j])%mod;
            if(j>0)
                t[i][j]=(t[i][j]+t[i][j-1])%mod;
        }
    }
    
//    f(i,0,n){
//        f(j,0,n){
//            cout<<t[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return t[n-1][n-1];
}

void solve()
{
    int n;
    cin>>n;
    f(i,0,n){
        f(j,0,n){
            cin>>grid[i][j];
        }
    }
    
    cout<<maxways(n);
}



int main()
{
    speed;
    solve();
    
    return 0;
}
