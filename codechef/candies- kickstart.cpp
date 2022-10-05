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
         ll counter=0;
         
         ll n,q;
         cin>>n>>q;
         ll arr[n];
         for(int i=0;i<n;i++)
             cin>>arr[i];
         
         while(q--)
         {
             char c;
             cin>>c;
             
             switch(c)
             {
                 case 'Q':
                     ll l , r;
                     cin>>l>>r;
                     l-=1;
                     r-=1;
                     for(ll i=l;i<=r;i++)
                     {counter=counter+(pow(-1,i-l)*arr[i]*(i-l+1));
                         
                     }
                     break;
                     
                 case 'U':
                     ll pos , to;
                     cin>>pos>>to;
                     
                     arr[pos-1]=to;
                     break;
                     
             }
         }
         
         
          
         cout<<"Case #"<<i<<": "<<counter<<"\n";
          
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
