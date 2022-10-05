#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll g;
    cin>>g;
    ll i,n,q, head, tail;
    while(g--)
    {
        cin>>i>>n>>q;
        head=0;
        tail=0;
        
        if(i==1)
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;
            }
            else
            {
                if(q==1)
                {
                    cout<<n/2<<endl;
                    
                }
                else
                    cout<<n/2+1<<endl;
            }
        }
        else
        {
            if(n%2==0)
                cout<<n/2<<endl;
            
            else
            {
                if(q==2)
                {
                    cout<<n/2<<endl;
                    
                }
                else
                    cout<<n/2+1<<endl;
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
