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
    int low;
    int mid;
    int high;
    int n;
    cin>>n;
    
    char response;
    char res1;
    cout<<n/2;
    cin>>response;
    res1=response;
    cout<<n/2;
    cin>>response;
    
    if(res1==response)
    {
        if(res1=='L')
        {
            low=1;
            high=n/2;
            mid=(low+high)/2;
            
            
        }
        else if(res1=='G')
        {
            low=n/2;
            high=n;
             mid=(low+high)/2;
        }
        
        cout<<n/4;
        cin>>response;
        if(res1=='L')
        {
            low=1;
            high=n/2;
            mid=(low+high)/2;
            
            
        }
        else if(res1=='G')
        {
            low=n/2;
            high=n;
             mid=(low+high)/2;
        }
        
//        else{};
       while(response!='E')
       {
           cout<<mid;
           cin>>response;
           if(response=='E')
               break;
           cout<<mid;
           cin>>response;
           
           if(response=='L')
           {
               high=mid;
               mid=(low+high)/2;
           }
           else if(response=='G')
           {
               low=mid;
               mid=(low+high)/2;
           }
           else{};
       }
    }
    
       else if(res1!=response)
       {
           if(response=='L')
                   {
                       low=1;
                       high=n/2;
                       mid=(low+high)/2;
                       
                       
                   }
                   else if(response=='G')
                   {
                       low=n/2;
                       high=n;
                        mid=(low+high)/2;
                   }
                   
           //        else{};
                  while(response!='E')
                  {
                      cout<<mid;
                      cin>>response;
                      if(response=='E')
                          break;
                      cout<<mid;
                      cin>>response;
                      
                      if(response=='L')
                      {
                          high=mid;
                          mid=(low+high)/2;
                      }
                      else if(response=='G')
                      {
                          low=mid;
                          mid=(low+high)/2;
                      }
                      else{};
                  }
       }
        
    }
    

    




int main()
{
    speed;
   
    solve();
    
    return 0;
}
