#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define maxsize 256
void countingsort(int arr[], int n)
{
    int countarray[maxsize];
    memset(countarray, 0, sizeof(countarray));
    
    for(int i=0;i<n;i++)
    {
        countarray[arr[i]]++;
    }
    
    for(int i=1;i<maxsize;i++)
    {
        countarray[i]+=countarray[i-1];
    }
    
    int ans[n];
    
    for(int i=0;i<n;i++)
    {
        ans[countarray[arr[i]]-1]=arr[i];
        countarray[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=ans[i];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    countingsort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
