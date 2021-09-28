#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void newselectionsort(int arr[], int n)
{
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        int max=arr[i], min=arr[i];
        int maxindex=i, minindex=i;
        
        for(int k=i;k<=j;k++)
        {
            if(arr[k]>max)
            {
                max=arr[k];
                maxindex=k;
            }
            else if(arr[k]<min)
            {
                min=arr[k];
                minindex=k;
            }
        }
        swap(arr[i],arr[minindex]);
        if(arr[minindex]==max)
            swap(arr[j],arr[minindex]);
        else
            swap(arr[j], arr[maxindex]);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    newselectionsort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    
    return 0;
}
