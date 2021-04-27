#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
const int n=1e3;
int memo[n][n];

int mcm(int arr[], int i, int j)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            memo[i][j]=-1;
        }
    }
    
    if(i>=j)
        return 0;
    
    else if(memo[i][j]!=-1)
        return memo[i][j];
    
    int ans=INT_MAX;
    
    for(int k=i;k<j;k++){
        int temp=mcm(arr, i, k)+mcm(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
        if(temp<ans)
            ans=temp;
    }
    return memo[i][j]=ans;
}

int main()
{
    int arr[]={40, 20, 30, 10, 30};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<mcm(arr,1,n-1)<<endl;
    
    return 0;
}
