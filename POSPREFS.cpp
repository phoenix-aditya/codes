/*=============================================================================
#  Author:          phoenix-aditya github:https://github.com/phoenix-aditya
#  Email:           ranout.aditya@gmail.com
#  FileName:        POSPREFS.cpp
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
    ll n,k;
    cin>>n>>k;

    ll neg=n-k;
    ll pos=k;

    ll currsum=0;
    ll ans[n];
    for(int i=0;i<n;i++){
        if((i+1)%2==0 && neg>0){
            ans[i]=-1*(i+1);
            currsum+=ans[i];
        }
        else
        {
            if(pos>0){
                if(currsum+i+1>0){
                    pos-=1;
                    currsum+=(i+1);
                    ans[i]=(i+1);
                }
            }
            else
            {
                neg--;
                currsum-=(i+1);
                ans[i]=-1*(i+1);
            } 
        }
    }
    for(int i=n-1;i>=0;i--){
        if(pos>0 && ans[i]<0){
            ans[i]=i+1;
            pos--;
        }
    }
    f(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


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
