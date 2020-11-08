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
    
    //dp array initialization of row 0 and col 0
    //for having sum x with no coins we would need infinite number of no coins therefore
    //we initialize the row with INT_MAX
    for(int i=0;i<n+1;i++)
        for(int j=0;j<total+1;j++)
        {
            if(j==0)
            t[i][j]=0;
            if(i==0)
            t[i][j]=INT_MAX-1;
            if(i==1 && coins[i-1]==j)
                t[i][j]=1;
            else if(i==1)
                t[i][j]=INT_MAX-1;
        }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<total+1;j++)
        {
            if(coins[i-1]<=j)
                t[i][j]=min(t[i-1][j], 1+t[i][j-coins[i-1]]);
            else
                t[i][j]=t[i-1][j];
        }
    }
    if(t[n][total]==INT_MAX)
        return -1;
    return t[n][total];
}
int main()
{
    int coins[]={9, 6, 5, 1};
    int size=sizeof(coins)/sizeof(coins[0]);
    int total=11;
    
    cout<<"number of ways to select coins to get sum total: "<<numberofways(coins, size, total)<<endl;
    
    return 0;
}
