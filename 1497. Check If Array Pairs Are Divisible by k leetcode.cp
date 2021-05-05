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
const int mxn=1e9+7;

bool solve(vector<int>& arr, int k)
{
    map<int,int> mp;
           for(auto &x: arr){
               x=(x%k+k)%k;
               if(mp.find(x)==mp.end()){
                   mp.insert({x,1});
               }else{
               mp[x]++;
               }
           }
           for(auto &x: mp){
               if(x.first==0 || x.first==k-x.first){
                   if(x.second%2!=0){
                     //   cout<<"run2\n";
                       return false;
                   }
                   x.second=0;
               }
               else{
                   if(x.second!=mp[k-x.first]){
                     //  cout<<"run3\n";
                       return false;
                   }
                   x.second=0;
                   mp[k-x.first]=0;
               }
               
           }
           
       return true;
}



int main()
{
    speed;
    vector<int> v{-1,-1,-1,-1,2,2,-2,-2};
    int k=3;
    cout<<solve(v,k);
    
    return 0;
}

