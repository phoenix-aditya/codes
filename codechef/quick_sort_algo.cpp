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

//quick sort
int partition(int arr[], int start, int end){
  int pivotval=arr[end];
  int pivotindex=start;

  for(int i=start;i<end;i++){
    if(arr[i]<=pivotval)
    {swap(arr[i],arr[pivotindex]);pivotindex++;}
  }
  swap(arr[pivotindex],arr[end]);
  return pivotindex;
  }

void quicksort(int arr[], int start, int end){
  if(start>=end)
  return;
int pindex=partition(arr,start,end);
quicksort(arr,0,pindex-1);
quicksort(arr,pindex+1,end);
}

void solve()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter array : ";
    f(i,0,n)
    cin>>arr[i];

    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl; 
}



int main()
{
     //    auto start = high_resolution_clock::now();
    speed;
  //  wh(t)
    solve();
   //    auto stop = high_resolution_clock::now();
   //    auto duration = duration_cast<microseconds>(stop - start);
  //
    //      cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}
