#include <iostream>
#include<math.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

int main()
{
    int t;
    cin>>t;
    const int m= 998244353;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
       
        int smallnumber=1, sum=1;
        int siz=pow(2,n);
        for(int i=1;i<siz;i++)
        {
            smallnumber=1;
            for(int j=0;j<n;j++)
            {
                
                if(i & (1<<j))
                {
                    if(arr[j]==smallnumber)
                        smallnumber++;
                }
            }
            sum=(sum+smallnumber)%m;
            
            
        }
    
        cout<<sum<<"\n";
            
    }
        
    
    return 0;
}
