#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//we have a coin array, that has infinite supply of coins in the coin array
//total number of ways we can make a particular sum using the given coins
//unbounded knapsack

int numberofways(int coins[], int n, int total)
{
    int t[n+1][total+1];
    memset(t, 0, sizeof(t));
    
    for(int i=0;i<n+1;i++)
        for(int j=0;j<total+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<total+1;j++)
        {
            if(coins[i-1]<=j)
                t[i][j]=t[i-1][j]+t[i][j-coins[i-1]];
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][total];
}
int main()
{
    int coins[]={1,2,3};
    int total=4;
    
    cout<<"number of ways to select coins to get sum total: "<<numberofways(coins, 3, total)<<endl;
    
    return 0;
}
