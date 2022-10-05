#include<bits/stdc++.h>
using namespace std;
#define ll long long

int checkbit(ll &a, ll pos)
{
    pos=62-pos;
    return (a&(1ll<<pos))!=0;
}
void setbit(ll &a, ll pos)
{
    pos=62-pos;
    a=a|(1ll<<pos);
    
}
void clearbit(ll &a, ll pos)
{
    pos=62-pos;
    a=a&~(1ll<<pos);
    
}

ll answer(ll &x, ll &y, ll &z)
{
    return (x&z)*(y&z);
}
int main()
{
    
    int t;
    cin>>t;
    vector<ll> z1;
   while(t--)
   {
       z1.clear();
       ll x,y,l,r;
       cin>>x>>y>>l>>r;
       ll val=0;
       int flag=1;
       int k=0;
       
       for(int i=0;i<=62;i++)
       {
           ll toadd=0;
           setbit(toadd, i);
           
           if(checkbit(l, i)==checkbit(r, i) && flag)
           {
               val+=r&toadd;
               continue;
           }
           if(flag==1)
           {flag=0;
               k=i;}
           
           if(r&toadd)
           {
               z1.push_back(val+toadd-1);
           }
           
           val+=r&toadd;
       }
       z1.push_back(l);
       z1.push_back(r);
       
       sort(z1.begin(),z1.end());
       
       val=z1[0];
       ll max=answer(x, y, val);
       for(ll z:z1)
       {
//           cout<<z<<" ";
           if(answer(x,y,z)>max)
           {val=z;max=answer(x, y, z);}
       }
      // cout<<endl;
       for(int i=0;i<=62;i++)
       {
           ll toadd1=0;
           setbit(toadd1, i);
           if((val&toadd1)==0)
               continue;
               
           if((x&toadd1)==0 && (y&toadd1)==0 && val-toadd1>=l)
           {
               val-=toadd1;
           }
           
       }
       cout<<val<<"\n";
   }
   
    return 0;
}
/*
 1
 7 12 4 17
 */
