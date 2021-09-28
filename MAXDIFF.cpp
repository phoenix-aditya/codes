#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    ll n, k;
    cin>>n>>k;
    
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    
    sort(arr,arr+n);
    
    ll  weightdad1=0, weightdad2=0, son1=0, son2=0;
    
    for(int i=n-1;i>=n-k;i--)
    {
        weightdad1=weightdad1+arr[i];
    }
    
    ll dadwt=max(sum-weightdad1,weightdad1);
    son1=sum-dadwt;
    weightdad1=dadwt;
    
    for(int i=0;i<k;i++)
    {
        son2=arr[i]+son2;
    }
    
    dadwt=max(sum-son2,son2);
    weightdad2=dadwt;
    son2=sum-dadwt;
    
    if(weightdad1>weightdad2)
    cout<<weightdad1-son1<<"\n";
    
    else
    cout<<weightdad2-son2<<"\n";
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
/*
1
6 2
30 1 1 1 1 20
 */
