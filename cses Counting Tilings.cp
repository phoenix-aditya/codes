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
int dp[1003][1<<11];

void generatemask(int initialmask, int pos,int finalmask, vector<int>& nextmask, int n){
    if(pos==n+1){
        nextmask.push_back(finalmask);
        return;
    }
    if((initialmask & (1<<pos))!=0){
        generatemask(initialmask, pos+1, finalmask, nextmask, n);
    }
    if(pos<n){
        if((initialmask&(1<<pos))==0 && (initialmask & (1<<(pos+1)))==0){
            generatemask(initialmask, pos+2, finalmask, nextmask, n);
        }
    }
    if((initialmask&(1<<pos))==0)
        generatemask(initialmask, pos+1, finalmask+(1<<pos), nextmask, n);
}

int func(int col, int m, int n, int mask){
    //base case
    if(col==m+1){
        if(mask==0)
            return 1;
        return 0;
    }
    
    if(dp[col][mask]!=-1){
        return dp[col][mask];
    }
    
    int ans=0;
    vector<int> nextmask;
    generatemask(mask, 1, 0,  nextmask, n);
    
    for(int x: nextmask){
        ans=(ans+func(col+1, m, n, x))%mod;
    }
    
    return dp[col][mask]=ans;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    memset(dp, -1, sizeof(dp));
    
    cout<<func(1, m, n, 0)<<endl;
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
