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
      string s1;
      cin>>s1;
      
      ll n=s1.size();
      
      int s[n];
      

      for(int i=0;i<n;i++)
      {
          s[i]=s1[i]-'0';
      }
    
      
      ll x;
      cin>>x;

      int arr[n];
      memset(arr,-1,sizeof(arr));
      
      for(int i=0;i<n;i++)
      {
          if(i-x>=0 || i+x<n)
          {
              if(i-x>=0)
              {
                  if(s[i]!=1)
                      arr[i-x]=0;
              }
              if(i+x<n)
              {
                  if(s[i]!=1)
                      arr[i+x]=0;
              }
          }
      }
      
      string s2="";
      
      for(int i=0;i<n;i++)
      {
          if(s[i]==1)
          {
              bool checker=1;
              
              if(i-x>=0 && arr[i-x]!=0)
              {
                  checker=0;
                  arr[i-x]=1;
              }
              if(i+x<n && arr[i+x]!=0)
              {
                  checker=0;
                  arr[i+x]=1;
              }
              
              if(checker)
              {
                  cout<<-1<<endl;
                  return;
              }
          }
      }
      
      for(int i=0;i<n;i++)
      {
          if(arr[i]==-1)
              cout<<0;
          else
              cout<<arr[i];
      }
      cout<<endl;
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
