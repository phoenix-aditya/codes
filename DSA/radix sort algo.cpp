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

int getmax(int arr[], int n){
  int max=0;
  for(int i=0;i<n;i++)
  if(arr[i]>max)
  max=arr[i];

  return max;
}

void countingsort(int arr[], int n, int exp){
int starting[10];
memset(starting,0,sizeof(starting));

for(int i=0;i<n;i++)
{
  starting[(arr[i]/exp)%10]++;
}
for(int i=1;i<10;i++){
  starting[i]+=starting[i-1];
}
for(int i=9;i>0;i--){
  starting[i]=starting[i-1];
}
starting[0]=0;

int output[n];

for(int i=0;i<n;i++){
  output[starting[(arr[i]/exp)%10]]=arr[i];
  starting[(arr[i]/exp)%10]++;
}
for(int i=0;i<n;i++)
arr[i]=output[i];
}

void radixsort(int arr[], int n){
int maximum=getmax(arr,n);
int exp=1;

for(int exp=1;maximum/exp>0;exp*=10)
countingsort(arr,n,exp);

}
void solve()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    radixsort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}



int main()
{
     //    auto start = high_resolution_clock::now();
    speed;
    //wh(t)
    solve();
   //    auto stop = high_resolution_clock::now();
   //    auto duration = duration_cast<microseconds>(stop - start);
  //
    //      cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}
