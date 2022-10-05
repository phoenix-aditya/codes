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
      int n;
      cin>>n;
      int x,y;
      for(int i=0;i<n;i++) cin>>x>>y;
      int sum=0;
      while(n>=3){
          sum=sum+n;
          n=n/2;
      }
      cout<<sum<<"\n";
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
