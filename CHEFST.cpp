#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    ll n1, n2, m;
    cin>>n1>>n2>>m;
    ll sum;
    m=(m*(m+1))/2;
    if(m<=n1 && m<=n2)
    sum=m;
    else
    sum=min(n1,n2);
        
        cout<<(n1+n2)-(2*sum)<<"\n";
    
}

int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
