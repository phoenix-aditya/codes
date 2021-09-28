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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int coins[16];
    memset(coins,0,sizeof(coins));
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
        {
            coins[5]++;
        }
        else if(arr[i]==10)
        {
            if(coins[5]==0)
            {
                flag=0;
                
            }
            else
            {
                coins[5]--;
                coins[10]++;
            }
            
        }
        else
        {
            if(coins[5]>=2 || coins[10]>=1)
            {
                if(coins[10]>=1)
                {
                    coins[10]--;
                    coins[15]++;
                    
                }
                else
                {
                    coins[5]-=2;
                    coins[15]++;
                }
            }
            else
            {
                flag=0;
            }
            
        }
        
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
