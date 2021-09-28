#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    int n;
    cin>>n;
    
    int max=0;
    int win=-1;
    
    int a[n],b[n];
    int a1,b1;
    cin>>a1>>b1;
    a[0]=a1;
    b[0]=b1;
    
    for(int i=1;i<n;i++)
    {
        cin>>a1>>b1;
        a[i]=a1+a[i-1];
        b[i]=b1+b[i-1];
    }
 /*   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    */
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i] && a[i]-b[i]>max)
        {
            max=a[i]-b[i];
            win=1;
            
        }
        else if(b[i]>a[i] && b[i]-a[i]>max)
        {
            max=b[i]-a[i];
            win=2;
            
        }
        
    }
    cout<<win<<" "<<max;
    
    
}



int main()
{
    speed;
   
    solve();
    
    return 0;
}
