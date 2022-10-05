/*=============================================================================
#  Author:          phoenix-aditya github:https://github.com/phoenix-aditya
#  Email:           ranout.aditya@gmail.com
#  FileName:        VACCINE2.cpp
#  Created On:      05/12/2020
=============================================================================*/
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
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,d;
    cin>>n>>d;

    ll arr[n];
    ll risk=0;
    f(i,0,n)
    {cin>>arr[i];if(arr[i]>=80 || arr[i]<=9)risk++;}
    cout<<ceil(1.0*risk/d)+ceil(1.0*(n-risk)/d)<<endl;
}



int main()
{
     //    auto start = high_resolution_clock::now();
    speed;
    wh(t)
    solve();
   //    auto stop = high_resolution_clock::now();
   //    auto duration = duration_cast<microseconds>(stop - start);
  //
    //      cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}
