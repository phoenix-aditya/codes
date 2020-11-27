/*=============================================================================
#  Author:          phoenix-aditya github:https://github.com/phoenix-aditya
#  Email:           ranout.aditya@gmail.com
#  FileName:        B.cpp
#  Created On:      27/11/2020
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
    int arr[]={1,0,3,1,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int starting[10];
    memset(starting,0,sizeof(starting));
    //counting the frequency of each element in given array
     for(int i=0;i<n;i++)
     {
         starting[arr[i]]++;
     }
     //making cumulative array
     for(int i=1;i<10;i++)
     {
         starting[i]+=starting[i-1];
     }
     //right shifting cumulative array by 1
     for(int i=9;i>0;i--)
     {
         starting[i]=starting[i-1];
     }
     starting[0]=0;

     int final[n];

     //placing element using starting array while
     //iterating over the orignal array, and increasing the starting[arr[i]] by 1.
     for(int i=0;i<n;i++)
     {
         final[starting[arr[i]]]=arr[i];
         starting[arr[i]]++;
     }
     //final array output
     f(i,0,n)
     cout<<final[i]<<" ";
     cout<<endl;
}



int main()
{
     //    auto start = high_resolution_clock::now();
    speed;
    wh(t)
    {solve();}
   //    auto stop = high_resolution_clock::now();
   //    auto duration = duration_cast<microseconds>(stop - start);
  //
    //      cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}


