#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//count of subsets in array having given sum
//knapsack dp problem
const int mxn=1e3+3;
int t[mxn][mxn];

int subsetcount(int arr[], int n, int sum)
{
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    
    for(int i=1;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][sum];
}
int main()
{
    int arr[]={1, 2, 3, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=6;
    
    cout<<subsetcount(arr, n, sum);
    return 0;
}
