#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

/*
 printing pattern:
 for n=4
    1
   23
  345
 4567
 */
int main()
{
    int n;
    cin>>n;
    
    ll z=n;
    int rownumber=1;
    while(z--)
    {
        for(int i=0;i<z;i++)
            cout<<" ";
        for(int i=rownumber;i<2*rownumber;i++)
            cout<<i;
        cout<<endl;
        rownumber++;
    }
    
    return 0;
}
