#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=0;i<n;i++)
#define endl "\n"
using namespace std;
#include<string.h>

int main()
{
    int arr[]={1,-3,2,1,-1};
    int x=2;
    int n=5;
    sort(arr,arr+5);
    int k=0;
    for(int jump=n/2;jump>=1;jump/=2)
    {
        
        while(k+jump<n && arr[k+jump]<=x)
            k+=jump;
    }
    if(arr[k]==x)
               cout<<true<<endl;
           else
               cout<<false<<endl;
    return 0;
}
