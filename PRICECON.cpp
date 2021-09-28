#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    
    int rev=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
            rev+=arr[i]-k;
    }
    cout<<rev<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
