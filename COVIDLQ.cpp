using namespace std;
#include<iostream>
#include<stdio.h>
#include<stdlib.h>


  
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
       int n, index1=-6, flag=0;
       cin>>n;
       
       int arr[n];
       
       for(int i=0;i<n;i++)
       cin>>arr[i];
       
       for(int i=0;i<n;i++)
       {
           
           if(arr[i]==1)
           {
               if(i-index1<6)
               {
                   flag=1;
                   break;
               }
               else
               {
                   index1=i;
               }
           }
       }
       if(flag!=0)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
        
    }
    return 0;
}
