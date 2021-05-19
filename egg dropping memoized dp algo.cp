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

// egg dropping problem
// dp Matrix chain multiplication implimentation
// eggs & floors given
// we  need to minimize number of attempts in worst case
// we need to calculate threshold floor from which if egg dropped it will not break
// and after it egg will break
// we need to output attempts to calc the critical floor
// now eggs are given, so it can be reused on floors where it dosnt break
// worst case is, top floor is the ans or bottom floor is the ans

const int mxn=1e3+3;
int dp[mxn][mxn];

int eggdropping(int eggs, int floors){
    if(floors==0 || floors==1)
        return floors;
    if(eggs==1)
        return floors;
    if(dp[eggs][floors]!=-1)
        return dp[eggs][floors];
    
    int ans=INT_MAX;
    for(int k=1;k<=floors;k++){
        int temp=1+max(eggdropping(eggs-1, floors-1) , eggdropping(eggs, floors-k));
        ans=min(ans, temp);
    }
    return dp[eggs][floors]=ans;
}


int main()
{
    speed;
    memset(dp, -1, sizeof(dp));
    
    cout<<eggdropping(2, 6);
    return 0;
}
