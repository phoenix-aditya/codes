#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
int count=0;
void targetsum(int arr[], int n, int size, int sum, int target)
{
    if(n==size)
    {
        if(sum==target)
            ::count++;
        return;
    }
    targetsum(arr, n+1, size,sum+arr[n],target);
    targetsum(arr, n+1, size, sum+-1*arr[n],target);
}

int main()
{
    int arr[]={1,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=1;
    targetsum(arr, 0, n,0,target);
    cout<<::count<<endl;
    
    
    return 0;
}
