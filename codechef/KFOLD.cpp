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
      ll n,k;
      cin>>n>>k;
      
      string s11;
      cin>>s11;
      ll count0=0;
      ll count1=0;
      for(char x:s11)
      {
          if(x=='1')
              count1++;
          else
              count0++;
      }
      
      string repeter="";
      
      ll fold=n/k;
      
      if(count1%fold!=0 || count0%fold!=0)
      {
          cout<<"IMPOSSIBLE\n";
          return;
      }
      for(int i=0;i<count0/fold;i++)
      {
          repeter.push_back('0');
      }
      for(int i=0;i<count1/fold;i++)
      {
          repeter.push_back('1');
      }
      string ans="";
      for(int i=1;i<=fold;i++)
      {
          ans+=repeter;
          reverse(repeter.begin(), repeter.end());
      }
      cout<<ans<<endl;
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
