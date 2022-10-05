#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define m 1000000007
//aditya ranaut- phoenix_aditya

ll factorial(ll n)
{
    ll result = 1;
      for (int i = 1; i <= n; i++)
          result = (result * i) % m;
    
      return result;
}

void solve()
{
    
    int n,x,pos;
    cin>>n>>x>>pos;
    
    int arr[n];
    for(int i=0;i<pos;i++)
        arr[i]=x-1;
    arr[pos]=x;
    for(int i=pos+1;i<n;i++)
        arr[i]=x+1;
    
    int wentleft=0,wentright=0;
    
        int low=0,high=n;
        int mid;
        while(low<high)
        {
            mid=(low+high)/2;
    //        cout<<mid<<endl;
            if(arr[mid]==x)
                low=mid+1;
            else if(arr[mid]<x)
            {
                low=mid+1;
                wentleft++;
            }
            else
            {
                high=mid;
                wentright++;
            }
        }
    
    int numbergreater=n-x;
    int numbersmaller=x-1;
    ll ans=1;
    if(wentright>numbergreater || wentleft>numbersmaller)
    {cout<<0<<endl;return;}
    
    for(int i=1;i<=wentright;i++)
    {
        ans=(ans*numbergreater)%m;
        numbergreater--;
    }
    for(int i=1;i<=wentleft;i++)
    {
        ans=(ans*numbersmaller)%m;
        numbersmaller--;
    }
    ll sum=numbersmaller+numbergreater;
    for(int i=1;i<=sum;i++)
    {
        ans=(ans*i)%m;
    }
    cout<<ans<<endl;
    
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

//    wh(t)
     solve();
    
    return 0;
}
