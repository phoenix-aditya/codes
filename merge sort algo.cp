#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void merge(int l[], int r[], int arr[], int llength, int rlength, int arrlength)
{
    int i=0;
    int j=0;
    int k=0;
    
    while(i<llength && j<rlength)
    {
        if(l[i]<=r[j])
        {
            arr[k]=l[i];
            i++;
        }
        else
        {
            arr[k]=r[j];
            j++;
        }
        k+=1;
    }
    while(i<llength)
    {
        arr[k]=l[i];
        k++;i++;
    }
    while(j<rlength)
    {
        arr[k]=r[j];
        k++;j++;
    }
}
void mergesort(int arr[], int n)
{
    if(n<2)
        return;
    
    int mid=n/2;
    int l[mid];
    int r[n-mid];
    
    for(int i=0;i<mid;i++)
    {
        l[i]=arr[i];
    }
    for(int i=mid;i<n;i++)
    {
        r[i-mid]=arr[i];
    }
    
    mergesort(l, mid);
    mergesort(r, n-mid);
    merge(l,r,arr,mid,(n-mid),n);
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    mergesort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
