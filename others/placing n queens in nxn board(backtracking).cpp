#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>
int countt=0;


const int n=8;
int col[n];
int diagnol[n*2-1];
int otherdiagnol[n*2-1];

//finding number of ways for placing n queens on an nxn board
void search(int y)
{
    if(y==n)
    {
        countt++;
        return;
    }
    
    for(int x=0;x<n;x++)
    {
        if(col[x] || diagnol[x+y] || otherdiagnol[x-y+n-1])
            continue;
        col[x]=diagnol[x+y]=otherdiagnol[x-y+n-1]=1;
        search(y+1);
        col[x]=diagnol[x+y]=otherdiagnol[x-y+n-1]=0;
  
    }
    
    
    
}



int main()
{
    memset(col, 0, sizeof(col));
    memset(diagnol, 0, sizeof(diagnol));
    memset(otherdiagnol, 0, sizeof(otherdiagnol));
    
    search(0);
    cout<<countt<<endl;
    
    
    
    return 0;
}
