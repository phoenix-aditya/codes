#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

ll ans=0;
const int n=8;
char board[n][n];
int chessboard[n][n];

bool issafe(int row, int col)
{
    for(int i=0;i<col;i++)
    {
        if(chessboard[row][i]==1)
            return false;
    }
    for(int i=row,j=col;i>=0 && j>=0; i--,j--)
        if(chessboard[i][j]==1)
            return false;
    
    for(int i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(chessboard[i][j]==1)
            return false;
    }
    return true;
}

void solveq(int col)
{
    if(col>=n)
    {ans++;return;}
    
    for(int i=0;i<n;i++)
    {
        if(issafe(i, col) && board[i][col]!='*')
        {
            chessboard[i][col]=1;
            solveq(col+1);
            chessboard[i][col]=0;
        }
    }
}

void solve()
{
    memset(chessboard, 0, sizeof(chessboard));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>board[i][j];
    }
    solveq(0);
    
    cout<<ans;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
