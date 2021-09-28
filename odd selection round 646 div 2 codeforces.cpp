#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=0;i<n;i++)
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    int n,x;
    cin>>n>>x;
    
    int arr[n];
    int odd=0,even=0;
    f(i,0,n)
    {cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
//    cout<<even<<" "<<odd<<endl;
    if(odd==0)
    {
        cout<<"No\n";
        return;
        
    }
    else
    {
        
        if(x%2==0)
    {
        if(even==0)
            cout<<"No\n";
        else
        {
            even=even-1;
            x=x-1;
            
            if(odd>=x)
                cout<<"Yes\n";
        
            
            
                else if(odd%2==0)
                {
                    if(even>=(x-(odd-1)))
                        cout<<"Yes\n";
                    else
                        cout<<"No\n";
                    
                }
                else
                {
                    if(even>=(x-odd))
                        cout<<"Yes\n";
                    else
                        cout<<"No\n";
                }
                
            
        }
    
    }
    else
    {
        
        if(odd>=x)
            cout<<"Yes\n";
        
        else
        {
            if(odd%2==0)
            {
                if(even>=(x-(odd-1)))
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                
            }
            else
            {
                if(even>=(x-odd))
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
            
        }
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
