#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void print(int n)
{
    if(n==1)
    {cout<<1<<" ";return;}
    
    cout<<n<<" ";
    print(n-1);
}

int main()
{
    print(7);
    
    
    return 0;
}
