#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

const int mxn=1005;
int arr[mxn][mxn];
bool checker[mxn][mxn];

bool isdone(int p, int q)
{
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            if(checker[i][j]==0)
                return false;
    return true;
}
int main()
{
    int p,q;
    cin>>p>>q;
    
    memset(arr, 0, sizeof(arr));
    
    int noofelements;
    cin>>noofelements;
    int r,c,data;
    for(int i=0;i<noofelements;i++)
    {
        cin>>r>>c>>data;
        arr[r][c]=data;
    }
    
    int startrow,startcol;
    cin>>startrow>>startcol;
    
    r=startrow;
    c=startcol;
    
    checker[startrow][startcol]=true;
    if(arr[r][c]!=0)
        cout<<r<<" "<<c<<" "<<arr[r][c]<<" "<<1<<endl;
    
    if(p==1 && q==1)
        exit(0);
    
    while(!isdone(p, q))
    {
        while(r<p && r>=0 && c<q && c>=0)
        {
//            cout<<"stuck1\n";
            
            
            r+=1;
            if(arr[r][c]!=0  && !checker[r][c])
            {cout<<r<<" "<<c<<" "<<arr[r][c]<<" "<<1<<endl;}
            checker[r][c]=true;
            
          
            if(c<q-1 && !checker[r][c+1])
                break;
            if(r==p-1)
            break;
        }
        while(r<p && r>=0 && c<q && c>=0)
        {
//            cout<<"stuck2\n";
            
            
            c+=1;
            if(arr[r][c]!=0  && !checker[r][c])
            {cout<<r<<" "<<c<<" "<<arr[r][c]<<" "<<2<<endl;}
            checker[r][c]=true;
            
            if(r>0 && !checker[r-1][c])
            break;
            if(c==q-1)
            break;
        }
        while(r<p && r>=0 && c<q && c>=0)
        {
//            cout<<"stuck3\n";
            
            r-=1;
            if(arr[r][c]!=0  && !checker[r][c])
            {cout<<r<<" "<<c<<" "<<arr[r][c]<<" "<<3<<endl;}
            checker[r][c]=true;
            
            if(c>0 && !checker[r][c-1])
                break;
            if(r==0)
            break;
        }
        while(r<p && r>=0 && c<q && c>=0)
        {
//            cout<<"stuck4\n";
            
            c-=1;
            if(arr[r][c]!=0 && !checker[r][c])
            {cout<<r<<" "<<c<<" "<<arr[r][c]<<" "<<4<<endl;}
            checker[r][c]=true;
            
            if(r<p-1 && !checker[r+1][c])
                break;
            if(c==0)
            break;
        }
    }
    return 0;
}
/*
 4 4 5
 0 0 8
 1 1 6
 1 2 5
 2 3 9
 3 2 7
 1 1
 */
