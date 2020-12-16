#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
map<tuple<ll,ll,ll>,bool> ans;
int main()
{
    speed;
    
    wh(t)
     {
         ans.clear();
         string s;
         cin>>s;
         ll n=s.length();
         for(int start=0;start<n;start++)
         {
             int count1=0;
             int countodd0=0;
             
             for(int len=1;len<=n-start;len++)
             {
                 ll pos=start+len-1;
                 if(s[pos]!='0')
                     count1++;
                 if(s[pos]!='1' && count1%2!=0)
                     countodd0++;
                 int counteven0=(len-count1)-countodd0;
                 
                 if(count1%2!=0){
                     if(!ans.count({len,count1,countodd0}))
                         ans.insert({{len,count1,countodd0},true});
                 }
                 else
                 {
                     if(!ans.count({len,count1,counteven0}))
                         ans.insert({{len,count1,counteven0},true});
                 }
             }
         }
         cout<<ans.size()<<endl;
     }
    return 0;
}
