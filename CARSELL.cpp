using namespace std;
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<math.h>

int main()
{
    int t;
    cin>>t;
    int z=1000000007;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        sort(arr, arr+n, greater<int>());
        
        int sum=0;
        int toadd;
        for(int i=0;i<n;i++)
        {
            toadd=arr[i]-i;
            if(toadd>0)
                sum=(sum+toadd)%z;
            else
                break;
        }
        cout<<sum<<"\n";
    
    }
    return 0;
}
