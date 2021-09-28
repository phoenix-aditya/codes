#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    int n;
    cin>>n;
    
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    }
    
    sort(arr,arr+n);
    
    if(even%2==0 && odd%2==0)
    {cout<<"YES\n";
    return;}
    
    else
    {
        int diff=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==1)
            diff++;
        }
        if(diff>0)
        cout<<"YES\n";
        
        else
        cout<<"NO\n";
    }

}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
