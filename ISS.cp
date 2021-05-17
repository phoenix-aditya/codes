#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll int
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=4e6+6;

ll temp[mxn];
ll result[mxn];

//ll gcd(ll a, ll b){
//    if(a==0)
//        return b;
//    return gcd(b%a, a);
//}

void precalc(){
    f(i,2,mxn){
        if(temp[i]!=i)
            continue;
        
        temp[i]=i-1;
        for(int j=i*2;j<mxn;j=j+i){
            temp[j]=temp[j]/i;
            temp[j]*=(i-1);
        }
    }
    
    f(i,1,mxn){
        result[i]=(result[i]+i-1);
        for(int j=i*2;j<mxn;j+=i){
            result[j]+=i*((1+temp[j/i])/2);
        }
    }
}

int main()
{
   speed;
    
    for(ll i=0;i<mxn;i++){
        temp[i]=i;
        result[i]=0;
    }
    
    precalc();
    
    wh(t)
     {
         ll k;
         cin>>k;
         ll index=k*4;
         index+=1;
         
         cout<<result[index]<<endl;
     }
    
    return 0;
}

