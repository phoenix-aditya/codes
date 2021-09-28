#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int memo[1000][1000];



int knapsack(int c, int n, int w[], int v[])
{
    n=n-1;
    if(c==0||n==0)
        return 0;
    if(memo[c][n]!=-1)
        return memo[c][n];
    
    if(w[n]>c)
    {
        memo[c][n]=knapsack(c, n, w, v);
        return memo[c][n];
        
    }
    memo[c][n]=max(v[n]+knapsack(c-w[n], n, w, v), knapsack(c, n, w, v));
    return memo[c][n];
}






int main()
{
    memset(memo,-1,sizeof(memo));
    
    
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(W, n, wt, val);
    return 0;
}
