#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {
         int n,x,y;
         cin>>n>>x>>y;
         set<int> ans;
         
         bool checker=true;
         if(n==2)
         {
             ans.insert(x);
             ans.insert(y);
             checker=false;
         }
         n-=1;
         int maxdiff=y-x;
         
         for(int i=1;i<=maxdiff && checker;i++)
         {
             int z= maxdiff/i;
             
             if(maxdiff%i==0 && z<=n)
             {
                 for(int j=1;j<z;j++)
                 {
                     ans.insert(x+i*j);
                 }
                 int j=x-i;
                 while(z<n && j>0)
                 {
                     ans.insert(j);
                     z++;
                     j-=i;
                 }
                 j=y+i;
                 while(z<n)
                 {
                     ans.insert(j);
                     j+=i;
                     z++;
                 }
                 ans.insert(x);
                 ans.insert(y);
                 break;
             }
             
         }
         for(auto x: ans)
             cout<<x<<" ";
         cout<<endl;
     }
    
    return 0;
}
