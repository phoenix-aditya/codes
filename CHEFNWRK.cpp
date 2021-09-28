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
const int mxn=1e3+3;
int arr[mxn];
  void solve()
  {
      ll n,k;
      cin>>n>>k;
      
      f(i,0,n)
      {
          cin>>arr[i];
      }
      int sum=0;
      int counter=1;
      for(int i=0;i<n;i++)
      {
          if(arr[i]>k)
          {
              cout<<-1<<endl;
              return;
          }
          if(sum+arr[i]<=k)
              sum+=arr[i];
          else
          {
              counter++;
              sum=arr[i];
          }
          
      }
      cout<<counter<<endl;
      
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
