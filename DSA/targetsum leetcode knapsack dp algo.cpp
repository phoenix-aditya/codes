#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int countsubsetofsumk(vector<int> &nums, int sum)
{
    int t[nums.size()+1][sum+1];
    int n=nums.size();
    
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
            if(nums[i-1]<=j)
            {
                t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
            }
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][sum];
}

void targetsum(vector<int> &nums, int target)
{
    int totalsum=0;
    for(auto x:nums)
        totalsum+=x;
    
    int sum=ceil(1.0*(target+totalsum)/2);
    
    cout<<countsubsetofsumk(nums, sum);
    
}

int main()
{
    vector<int> arr={1};
    int n=arr.size();
    int target=2;
    targetsum(arr, target);
    return 0;
}
