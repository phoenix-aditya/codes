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
 printing pattern
 for n=7
 *
  * *
   * * *
    * * * *
   * * *
  * *
 *
 
 */
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=ceil(1.0*n/2);i++)
    {
        for(int z=1;z<i;z++)
            cout<<" ";
        for(int z=1;z<=i;z++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=floor(n/2);i>=1;i--)
    {
        for(int z=i;z>1;z--)
            cout<<" ";
        for(int z=i;z>=1;z--)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
