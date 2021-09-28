#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    int a, b;
    cin>>a>>b;
    
    if(a>b)
    {
        int c=a;
        a=b;
        b=c;
    }
    
    if(a==b)
    cout<<4*a*b<<"\n";
    
    else if(2*a>=b)
    cout<<pow(2*a,2)<<"\n";
    
    else
    cout<<pow(b,2)<<"\n";
    
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
/*
16
16
4
9
64
9
64
40000
*/
