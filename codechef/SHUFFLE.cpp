#include <iostream>
using namespace std;

void swapper(int *a,int *b)
{
    int temp;
    
      temp = *b;
      *b = *a;
      *a = temp;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int z,swaps;
        while(1)
        {
            z=0; swaps=0;
            while(z+k<n)
            {
                if(arr[z]>arr[z+k])
                {swapper(arr+z,arr+(z+k));swaps++;}
                z++;
            }
            if(swaps==0)
                break;
  
        }
        int flag=-1;
        for(int i=0;i<n-1;i++)
            if(arr[i]>arr[i+1])
            {
                flag=1;
                break;
            }
       if(flag==1)
           cout<<"no"<<"\n";
        else if(flag==-1)
            cout<<"yes"<<"\n";
        
    }
    return 0;
}
