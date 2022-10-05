#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
bool checkarr(int arr[])
{
    for(int i=0;i<3;i++)
    {if(arr[i]!=0)
        return false;}
    
        return true;
}

void solve()
{
    int n,m;
    set<int> occpiedrows;
    set<int> occupiedcolumns;
    
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {occpiedrows.insert(i);
                occupiedcolumns.insert(j);}
        }
    int currturn=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(!occupiedcolumns.count(j) && !occpiedrows.count(i))
            {
                occupiedcolumns.insert(j);
                occpiedrows.insert(i);
                if(currturn==0)
                    currturn=1;
                else
                    currturn=0;
            }
        }
         
    if(currturn==0)
        cout<<"Vivek\n";
    else
        cout<<"Ashish\n";
        
}
    

    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
