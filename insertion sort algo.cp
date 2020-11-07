#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void insertionsort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int pos=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>pos)
        {
            //swapping the elements till we put the ith element at the right place
            swap(arr[j+1], arr[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    insertionsort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    
    return 0;
}
