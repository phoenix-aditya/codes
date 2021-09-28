#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);

using namespace std;
#include<string.h>
#include<math.h>
#include<complex>
void solve()
{
    unsigned int low1=1;
    unsigned int high1;
    unsigned int low2=1;
    unsigned int high2;
    unsigned int mid1;
    unsigned int mid2;
    
    unsigned int n;
    cin>>n;
    high1=n;
    high2=n;
    unsigned int counter=1;
    char response;

    while(1)
    {
        if(counter%2==0 && (low1<=high1))
        {
            mid1=(low1+high1)/2;
             
             cout<<mid1<<endl;
            
             cin>>response;
             
            
             
             if(response=='L')
                       {
                           high1=mid1-1;
                       }
             else if(response=='G')
                       {
                           low1=mid1+1;
                           
                       }
             else if(response=='E')
             {
                 break;
             }
        }
        else if(low2<=high2 && counter%2!=0)
        {
            mid2=(low2+high2)/2;
                        
                        cout<<mid2<<endl;
                        cin>>response;
                        
                       
                        
                        if(response=='L')
                                  {
                                      high2=mid2-1;
                                  }
                        else if(response=='G')
                                  {
                                      low2=mid2+1;
                                  }
                        else if(response=='E')
                        {
                            break;
                        }
        }
        counter++;
    }
}
int main()
{
    speed;
   
    solve();
    
    return 0;
}
