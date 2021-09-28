  #include<bits/stdc++.h>
  #define pi 3.14159265359
  #define ll long long
  #define wh(t) int t;cin>>t; while(t--)
  #define speed  ios::sync_with_stdio(0); cin.tie(0);
  #define f(i,a,b) for(int i=a;i<b;i++)
  using namespace std;
  #include<string.h>

  //aditya ranaut- phoenix_aditya

int checkbit(ll &a, ll pos)
{
    return (a&(1ll<<pos))!=0;
}
void setbit(ll &a, ll pos)
{
    a=a|(1ll<<pos);
}
void clearbit(ll &a, ll pos)
{
    a=a&~(1ll<<pos);
}

  void solve()
  {
      ll n;
      ll k=1;
      
      cin>>n;
      
      ll sum=0;
      ll sum1=0;
      ll sumend=0;
      ll set=0;
      ll ans=0ll;
      ll two20=524288;
      cout<<1<<" "<<two20<<endl;
      cin>>sumend;
      sum1=abs(sumend-n*two20);
      
//      cout<<sum1<<endl;
      
      while(k<=pow(2,18))
      {
          cout<<1<<" "<<k<<endl;
          cin>>sum;
          
          if(sum==-1)
              exit(0);
          
//          noofset=n/2+abs(sum-sum1);
          bool checker=false;
          
//          works so dont touch
          if(n%2!=0)
          {
              ll tot=sum-sum1;
          for(int i=1;i<=n;i+=2)
          {
              ll z= (n-i)*k-(i*k);
              if(tot==z)
              {
                  if(i%2!=0)
                      checker=true;
              }
            
          }
          }
          
          else
          {
              ll tot=sum-sum1;
              
              for(int i=1;i<=n;i+=2)
              {
                  ll z= (n-i)*k-(i*k);
  
                  if(tot==z)
                  {
                      if(i%2!=0)
                          checker=true;
                  }
                
              }
              
          }
          
          if(checker)
              setbit(ans, set);
          else
              clearbit(ans, set);
          
//          for(int i=10;i>=0;i--)
//              cout<<checkbit(ans, i)?1:0;
          
//          cout<<endl;
          
          set++;
          k=k<<1;
      }
      set=19;
      k=1<<19;
      bool checker=false;
                
      //          works so dont touch
                if(n%2!=0)
                {
                    ll tot=sumend-sum1;
                for(int i=1;i<=n;i+=2)
                {
                    ll z= (n-i)*k-(i*k);
                    if(tot==z)
                    {
                        if(i%2!=0)
                            checker=true;
                    }
                  
                }
                }
                
                else
                {
                    ll tot=sumend-sum1;
                    
                    for(int i=1;i<=n;i+=2)
                    {
                        ll z= (n-i)*k-(i*k);
        
                        if(tot==z)
                        {
                            if(i%2!=0)
                                checker=true;
                        }
                      
                    }
                    
                }
                
                if(checker)
                    setbit(ans, set);
                else
                    clearbit(ans, set);
      
      
      ll end=0;
      cout<<2<<" "<<ans<<endl;
      cin>>end;
      if(end==1)
          return;
      else if(end==-1)
          exit(0);
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
/*
 1 : 10
 2 : 10
 4 : 18
 8 : 42
 16 : 74
 32 : 138
 64 : 266
 128 : 522
 256 : 1034
 512 : 2058
 1024 : 4106
 2048 : 8202
 4096 : 16394
 8192 : 32778
 16384 : 65546
 32768 : 131082
 65536 : 262154
 131072 : 524298
 262144 : 1048586
 524288 : 2097162
 1048576 : 4194314
 */
