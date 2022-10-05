#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    char arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    
    int cost=0;
    if(y>=(2*x))
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(arr[i][j]=='.')
                    cost+=x;
    }
    else
    {
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(arr[i][j]=='.')
            {
                if(j<m-1 && arr[i][j+1]=='.')
                {cost+=y;j=j+1;}
                else
                    cost+=x;
            }
    }
    cout<<cost<<endl;
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
