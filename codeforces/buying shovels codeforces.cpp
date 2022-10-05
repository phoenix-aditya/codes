#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>


void solve()
{
    ll n, k;
    cin>>n>>k;
    
    
    
        if(n<=k)
        cout<<1<<"\n";
    
        else{
            ll temp=1;
            for(int i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(n/i>temp && (n/i)<=k)
                    {
                        temp=n/i;
                        
                       // cout<<i<<endl;
                    }
                    if(i>temp && i<=k)
                    temp=i;
                }
            }
            cout<<(n/temp)<<"\n";
            return;
            
        }
    
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}

/*
 1
 18493361 10768352
 
 */
