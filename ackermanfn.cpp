#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
//#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

int ackerman(int m, int n){
    if(m==0)
    return n+1;
    if(m>0 && n==0)
    return ackerman(m-1,1);
    else
    return ackerman(m-1,ackerman(m,n-1));
}
int main()
{
    cout<<ackerman(1,2)<<endl;
    return 0;
}
