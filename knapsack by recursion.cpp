#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>


int knapsack(int c, int n, int w[], int v[])
{
    n=n-1;
    if(c==0||n==0)
        return 0;
    
    if(w[n]>c)
        return knapsack(c, n, w, v);
    
    return max(v[n]+knapsack(c-w[n], n, w, v), knapsack(c, n, w, v));
}






int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(W, n, wt, val);
    return 0;
}
