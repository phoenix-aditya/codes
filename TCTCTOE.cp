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
const int mxn=3;
char board[mxn][mxn];


void solve()
{
    ll numberofx=0;
    ll numberofo=0;
    ll numberofdash=0;
    ll p1=0;
    ll p2=0;
    ll n=3;
    
    f(i,0,n){
        f(j,0,n){
            cin>>board[i][j];
        }
    }
    
    f(i,0,n){
        f(j,0,n){
            if(board[i][j]=='X')
                numberofx++;
            else if(board[i][j]=='O')
                numberofo++;
            else
                numberofdash++;
        }
    }
    
    if(numberofo>numberofx){
        cout<<"3\n";
        return;
    }
    if(abs(numberofo-numberofx)>=2){
        cout<<"3\n";
        return;
    }
    
    for(int i=0;i<n;i++){
        if(board[i][0]=='X' && board[i][1]=='X' && board[i][2]=='X')
            p1++;
        if(board[i][0]=='O' && board[i][1]=='O' && board[i][2]=='O')
            p2++;
        if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X')
            p1++;
        if(board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O')
            p2++;
    }
    
    if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
        p1++;
    if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
        p2++;
    if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
        p1++;
    if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
        p2++;
    
    if((numberofdash==0)&&((p1==0 && p2==0) || (p1==2))){
        cout<<"1\n";
    }else if(numberofx>numberofo && p1==1 && p2==0){
        cout<<"1\n";
    }else if(numberofo==numberofx && p1==0 && p2==1){
        cout<<"1\n";
    }else if(numberofdash>0 && p1==0 && p2==0){
        cout<<"2\n";
    }else{
        cout<<"3\n";
    }
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
