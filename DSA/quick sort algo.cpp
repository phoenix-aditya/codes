#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int partition(int arr[], int start, int end)
{
    int pindex=start;
    int pivot=arr[end];
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex], arr[end]);
    return pindex;
}

void quicksort(int arr[], int start, int end)
{
    if(start<end)
    {
    int breakpoint=partition(arr,start,end);
    quicksort(arr, start, breakpoint-1);
    quicksort(arr, breakpoint+1, end);
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    
    for(int i=0;i<size;i++)
        cin>>arr[i];
    
    quicksort(arr, 0, size-1);
    
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
