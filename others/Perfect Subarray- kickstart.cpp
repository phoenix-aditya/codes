#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)


using namespace std;
#include<string.h>


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
     {
         ll n, k;
         cin>>n>>k;
         ll arr[n];
         
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         ll counter=0;
         ll temp=0;
         for(int i=0;i<n;i++)
         {
           if(arr[i]==k)
           {
               temp=0;
               ll z=k;
               while(arr[i]==z && z>=1 && i<n)
               {
                   temp++;
                   i++;
                   z--;
               }
               i=i-1;
               if(temp==k)
                   counter++;
           }
             
         }
         
         cout<<"Case #"<<i<<":"<<counter<<"\n";
         
         
     }
    
    return 0;
}
/*
 3
 6 3
 3 2 1 3 2 1
 10 5
101 100 99 98 5 4 3 2 100 10
 5 2
 100 99 2 1 21
 */
