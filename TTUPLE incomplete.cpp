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
    int arr[3];
    int p,q,r,a,b,c;
    int counter=0;
    cin>>p>>q>>r>>a>>b>>c;
    do{
        arr[0]=a-p;
        arr[1]=b-q;
        arr[2]=c-r;
        
        
        
        
        
        
        counter++;
    }while(checkarr(arr));
        
}
    

    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
