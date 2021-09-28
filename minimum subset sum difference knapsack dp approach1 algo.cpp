#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//minimum subset sum difference
//knapsack dp

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
void minsubsetsum(int arr[], int n)
{
    int sumwhole=0;
    for(int i=0;i<n;i++)
        sumwhole+=arr[i];
    int initialsum=sumwhole;
    sumwhole/=2;
    
    while(sumwhole>=0)
    {
        if(subsetsum(arr, sumwhole, n))
        {
            cout<<"min subset sum diff is : "<<abs((initialsum-sumwhole)-sumwhole)<<endl;
            return;
        }
    }
}
int main()
{
    int arr[] = {3, 1, 4, 2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    minsubsetsum(arr, n);
    return 0;
}
