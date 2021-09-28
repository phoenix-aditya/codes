#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    ll n, m;
    cin>>n>>m;
    int counter=0;
    int arr[n];
    memset(arr,0,sizeof(arr));
    
    int cust[m];
    int noofcus[401];
    memset(noofcus,0,sizeof(noofcus));
    
    for(int i=0;i<m;i++)
    {cin>>cust[i];
    noofcus[cust[i]]++;}
    
    int arrayindex=0;
    
    for(int i=0;i<m;i++)
    {
        int cus=cust[i];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(cus==arr[i])
            flag=1;
            
        }
        if(flag==1)
        continue;
        
        if(arrayindex<n)
        {
            arr[arrayindex++]=cus;
            counter++;
            noofcus[cus]--;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                
                if(noofcus[arr[i]]!=0 && i<n-1)
                continue;
                
                else
                {
                    arr[i]=cus;
                    noofcus[cus]--;
                    counter++;
                    break;
                    
                }
            }
        }
        
 /*       for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;   */
        
        
        
        
    }
    cout<<counter<<"\n";
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
