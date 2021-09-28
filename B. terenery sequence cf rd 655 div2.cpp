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
     ll x1, y1, z1, x2, y2, z2;
     cin>>x1>>y1>>z1;
     cin>>x2>>y2>>z2;
     
     
     ll ans=0;
//     first 2 with second 1
     if(z1>=y2)
     {
         ans+=(2*y2);
         z1=z1-y2;
         y2=0;
     }
     else
     {
         ans+=(2*z1);
         y2=y2-z1;
         z1=0;
     }
//     first 2 with second 2
    if(z1>=z2)
    {
        z1=z1-z2;
        z2=0;
    }
    else
    {
        z2=z2-z1;
        z1=0;
    }
//     first 2 with second 0
     if(z1>=x2)
     {
         z1=z1-x2;
         x2=0;
     }
     else
     {
         x2=x2-z1;
         z1=0;
     }
//     second 2 with first 0
     if(z2>=x1)
     {
         z2=z2-x1;
         x1=0;
     }
     else
     {
         x1=x1-z2;
         z2=0;
     }
//     second 2 with first 1
     if(z2>=y1)
     {
         ans-=(2*y1);
         z2=z2-y1;
         y1=0;
     }
     else
     {
         ans-=(2*z2);
         y1=y1-z2;
         z2=0;
     }
//     cout<<x1<<y1<<z1<<endl;
//     cout<<x2<<y2<<z2<<endl;
     cout<<ans<<endl;
}

 int main()
 {
     speed;
     wh(t)
      {solve();}
     
     return 0;
 }
