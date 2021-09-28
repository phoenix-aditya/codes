using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main()
{
    ll n, d;
    
    cin>>n>>d;
    
    ll arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    ll counter=0;
    for(int i=0;i<n-1;)
    {
        if(abs(arr[i]-arr[i+1])<=d)
        {counter++;i+=2;}
        else
            i++;
    }
    cout<<counter<<"\n";
    return 0;
}
