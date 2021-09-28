#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>

int count=0;
const int n=2;
int arr[n][n];
bool equalarr(int arr[n][n])
{
    int val=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(arr[i][j]!=val)
                return false;
        
    }
    return true;
    
}
void paths(int arr[n][n], int x, int y)
{
    if(x==n-1 && y==n-1 && equalarr(arr))
        ::count++;
    
    int flag=0;
    
    if(!arr[x-1][y] && x>=1 && x<n && y>=0 && y<n)
    {
        flag=1;
        arr[x][y]=1;
        paths(arr,x-1,y);
        arr[x][y]=0;
    }
    if(!arr[x+1][y] && x>=0 && x<n-1 && y>=0 && y<n)
    {
        flag=1;
        arr[x][y]=1;
        paths(arr, x+1, y);
        arr[x][y]=0;
    }
    if(!arr[x][y+1] && x>=0 && x<n && y>=0 && y<n-1)
    {
        flag=1;
        arr[x][y]=1;
        paths(arr, x, y+1);
        arr[x][y]=0;
    }
    if(!arr[x][y-1] && x>=0 && x<n && y>0 && y<n)
    {
        flag=1;
        arr[x][y]=1;
        paths(arr, x, y-1);
        arr[x][y]=0;
    }
    
    if(flag==0)
    {
        return;
    }
}

//x>=0 && x<n && y>=0 && y<n
int main()
{
    memset(arr, 0, sizeof(arr));
    paths(arr,0,0);
    cout<<::count<<endl;
  
   return 0;
    
}
