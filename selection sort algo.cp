#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void selectionsort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int start=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[start])
                start=j;
        }
        swap(arr[i], arr[start]);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    selectionsort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    
    return 0;
}
