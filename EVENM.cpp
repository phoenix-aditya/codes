#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    int n;
    cin>>n;
    
    
    
  
    if(n%2!=0)
    {int val=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {cout<<" "<<val;val++;}
            else
            {
                cout<<" "<<val;val++;}
            }
        cout<<endl;
        }
    }
    else
    {
        int valodd=1;
        int valeven=2;
        
        for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if((i+j)%2==0)
                   {cout<<" "<<valodd;valodd+=2;}
                   else
                   {
                       cout<<" "<<valeven;valeven+=2;}
                   }
               cout<<endl;
               }
           }
        
        
        
    }
    

    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
