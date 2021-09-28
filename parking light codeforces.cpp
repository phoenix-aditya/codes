#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int arr[10];

void solve()
{
    int n, m;
    
    cin>>n>>m;
    
    if(n%2!=0)
    {
        if(m%2==0)
            cout<<(m/2)+m*((n-1)/2)<<"\n";
        else
            cout<<((m/2)+1)+m*((n-1)/2)<<"\n";
    }
    else
    {
        if(m%2==0)
            cout<<m*(n/2)<<"\n";
        else
            cout<<m*(n/2)<<"\n";
        
    }
    
}



int main()
{
    wh(t)
    {solve();}
    
    return 0;
}
