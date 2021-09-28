#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

#include<string.h>

void solve()
{
    int p;
        
    int arr[5];
    
    for(int i=0;i<5;i++)
    { cin>>arr[i];}
    
    cin>>p;

    
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+(arr[i]*p);
        
    }
    if(sum>(24*5))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    
}



int main()
{
    speed;
   wh(t)
    {solve();}
    
    return 0;
}
