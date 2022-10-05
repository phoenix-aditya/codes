#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int dis,max=1,min=1000,counter=1,pass=0;
    
    for(int i=0;i<n;i++)
    {
        pass++;
        counter=1;
        while(abs(arr[i]-arr[i+1])<=2 && i<n-1)
        {counter++;i++;}
        
        if(counter>max)
        {max=counter;}
        
        if(counter<min)
        min=counter;
        
        
    }
    if(counter>max)
        {max=counter;}
        
    if(counter<min)
        min=counter;
    cout<<min<<" "<<max<<"\n";
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
