#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
int arr[10];

void solve()
{
    int grannyyard=1;
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    
    for(int i=n-1;i>=0;i--)
    {
         if(arr[i]>n+1)
             continue;
        
        else if(arr[i]<=i+1)
        {grannyyard+=(i+1);break;}
        
        else
            continue;
    }
    
    
    
    
    cout<<grannyyard<<"\n";
}



int main()
{
    wh(t)
    {solve();}
    
    return 0;
}
