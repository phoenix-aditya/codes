#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int memo[101];
//top down approach to coing change problem
int coinchange(int coins[],int n, int amt)
{
    if(amt==0)
    return 1;
    
    if(amt<=0)
    return 0;
    
    if (n <=0 && amt >= 1)
    return 0;
    
   
    
    return coinchange(coins, n-1, amt)+coinchange(coins, n, amt-coins[n-1]);
  
}



int main()
{
    memset(memo,-1, sizeof(memo));
    memo[0]=1;
    
   int arr[] = {1, 2, 3};
   int m = sizeof(arr)/sizeof(arr[0]);
   printf("%d ", coinchange(arr, m, 4));
  
   return 0;
    
}
