#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//dividing array into 2 subsets such that
//their sum's difference is equal to given difference
//return the count of such subset pairs

const int mxn=1e3+3;
int t[mxn][mxn];

int subsetdiffisK(int arr[], int n, int k)
{
//    s1-s2=k & s1+s2=sum arr
    int totalsum=0;
    f(i,0,n)
    totalsum+=arr[i];
    
//    adding above equations
//    s1 should be equal to sumarr+diff/2
    
    int sum=(totalsum+k)/2;
    
//    now the problem is reduced to finding the number of subsets in an array of sum = sum
//    count subset of given sum problem now
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            }
            else
                t[i][j]=t[i-1][j];
        }
    
    return t[n][sum];
}
int main()
{
    int arr[]={1,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<subsetdiffisK(arr, n, 1)<<endl;
    
    
    
    return 0;
}
