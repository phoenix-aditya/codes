#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//equal sum subset problem
//knapsack dp, returning true or false if the set can be
// divided into two parts of equal sum

const int mxn=1e3+3;
bool t[mxn][mxn];

bool subsetsum(int arr[], int sum, int n)
{
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    
    for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
            }
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][sum];
}
int main()
{
    int arr[]={1,5,11,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    f(i,0,n)
    sum+=arr[i];
    
    //if the total sum of array is not even, it is impossible to break into two equal halves
    if(sum%2!=0)
    {
        cout<<"NOT possible\n";
    }
    else
    {
        // like subset sum, if we get one half or sum/2 subset exists in the array
        //then obviously the other half will also be sum/2
        sum/=2;
        cout<<subsetsum(arr, sum, n)<<endl;
    }
    
    return 0;
}
