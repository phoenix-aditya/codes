#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>

ll minval(int l, int r, int spaces)
{
    if(spaces==0)
    return 0;
    
    int m=(l+r)/2;
    
    int len=0;
    
    len=(m-l)+(r-m)+minval(l,m,m-l-1)+minval(m,r,r-m-1);
    return len;
}
void solve()
{
    int n, m;
    cin>>n>>m;
    
    ll minlen=minval(0,n+1,n);
    
    ll maxlen=(((n+1)*(n+2))/2)-1;
    
    if(m<minlen)
    cout<<"-1\n";
    
    else if(m>=minlen && m<=maxlen)
    cout<<"0\n";
    
    else
    cout<<m-maxlen<<"\n";
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
