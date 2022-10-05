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

 const int mxn=1e5+5;
 ll arr[mxn];
 ll sorted[mxn];

 ll gcd(ll a, ll b)
 {
     if(a==0)
         return b;
     else
         return gcd(b%a,a);
 }
 ll arraygcd(vector<ll> outofplace, ll n)
 {
     ll result=outofplace[0];
     for (int i = 1; i < n; i++)
       {
           result = gcd(outofplace[i], result);
     
           if(result == 1)
           {
              return 1;
           }
       }
       return result;
 }

  void solve()
  {
      ll n;
      cin>>n;
      
      f(i,0,n)
      {cin>>arr[i];sorted[i]=arr[i];}
      
      sort(sorted,sorted+n);
      
      vector<ll> outofplace;
      
      for(int i=0;i<n;i++)
      {
          if(arr[i]==sorted[i])
              continue;
          else
              outofplace.push_back(arr[i]);
      }
     if(outofplace.size()==0)
     {
         cout<<"YES\n";
         return;
         
     }
      sort(outofplace.begin(),outofplace.end());
      
      for(auto x:outofplace)
      {
          if(gcd(sorted[0],x)!=sorted[0])
          {
              cout<<"NO\n";
              return;
          }
      }
      cout<<"YES\n";
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
