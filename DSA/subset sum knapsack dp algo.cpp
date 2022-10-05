#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//subset sum problem
// if s susbset is present in the array y/n
//whose sum is equal to the input sum
//outputs 1, if sum is possible else 0
const int mxn=1e3+3;
bool t[mxn][mxn]={0};

int main()
{
    int arr[] = { 3,4, 5, 2};
    int sum = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i<n+1;i++)
        t[i][0]=true;
    for(int j=1;j<sum+1;j++)
        t[0][j]=false;
    
    
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
    
    cout<<t[n][sum]<<endl;
    return 0;
}
