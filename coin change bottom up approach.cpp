#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>


int arr[1000];
int temp=INT_MAX;
int coinchange(int coin[], int n, int amt)
{
    
    arr[0]=0;
    
    for(int i=1;i<=amt;i++)
    {
        temp=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(coin[j]>i)
                continue;
            
            temp=min(temp,arr[i-coin[j]]+1);
            
            arr[i]=temp;
        }
    }
     if(arr[amt]>amt || arr[amt]<0)
         return -1;
    else
        return arr[amt];
}

int main()
{
    memset(arr,100000,sizeof(arr));
   int oyi[] = {2};
   int n = sizeof(oyi)/sizeof(oyi[0]);
   int amt = 3;
    cout << coinchange(oyi, n, amt);
    
    return 0;
}
