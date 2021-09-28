using namespace std;
#include<bits/stdc++.h>

#define ll long long
ll m=1000000007;
ll fastmulti(int a, int n)
{
    if(n==1)
        return a;
    else
    {
    if(n%2==0)
    {
        ll y=pow(fastmulti(a, n/2),2);
        if(y>m)
            y=y%m;
        else
            y=y;
        return y;
    }
    else
    {
        ll y=a*pow(fastmulti(a, (n-1)/2),2);
        if(y>m)
            y=y%m;
        else
            y=y;
        return y;
        
    }
        
    }
}

int main()
{
    cout<<fastmulti(2, 4)<<"\n";
    cout<<fastmulti(3, 2)<<"\n";
    cout<<fastmulti(5, 3)<<"\n";
    
    
    return 0;
}
