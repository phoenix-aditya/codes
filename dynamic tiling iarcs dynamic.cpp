#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int memo[100];


int numberof(int n)
{
    if(memo[n]!=-1)
        return memo[n];
    
    else
    {
        int z=numberof(n-1)+numberof(n-2);
        memo[n]=z;
        return z;
    }
}

int main()
{
    memset(memo,-1, sizeof(memo));
    memo[0]=1;
    memo[1]=1;
    
    int n;
    cin>>n;
    
    cout<<numberof(n)<<"\n";
    
    return 0;
}
