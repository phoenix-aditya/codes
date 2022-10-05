#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
void solve()
{
    ll n, k;
    cin>>n>>k;
    
    string arr;
    cin>>arr;
    ll counter=0;
    
    
    
    for(int i=0;i<n;i+=(k+1))
    {
        if(i>=n)
            break;
        if(arr[i]=='1')
            continue;
       
           bool flag=true;
           for(int j=i;(j<n && j<=(i+k));j++)
           {
               if(arr[j]=='1')
               {flag=false;i=j;}
               
           }
           if(flag==true)
           {counter++;}
    }
//    f(i,0,n)
//    cout<<arr[i]<<" ";
//    cout<<endl;
    cout<<counter<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
