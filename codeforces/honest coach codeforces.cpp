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
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    sort(arr,arr+n);
    int diff=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<diff)
        diff=arr[i+1]-arr[i];
    }
    
    cout<<diff<<"\n";
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
/*
16
16
4
9
64
9
64
40000
*/
