#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int arr[10];

void solve()
{
    int n;
    cin>>n;
    
    int ans=0;
    
    while(n>0)
    {
        ans<<=1;
        
        if((n&1)==1)
            ans^=1;
        
        n>>=1;
    }
    cout<<ans<<endl;
    
}



int main()
{
    
     solve();
    
    return 0;
}
