#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
//aditya ranaut - phoenix_aditya
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    f(i,0,n)
    cin>>arr[i];
    
    sort(arr,arr+n);
    
    cout<<arr[0]+arr[1]<<endl;
}



int main()
{
    speed;
    
   wh(t)
    solve();
    
    return 0;
}
