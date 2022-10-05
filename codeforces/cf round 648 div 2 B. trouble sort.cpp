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
    int n;
    cin>>n;
    vector<pair<int,int>> value(n);
    
    
    for(int i=0;i<n;i++)
        cin>>value[i].first;
    for(int i=0;i<n;i++)
        cin>>value[i].second;
    
    bool flag=false;
    
    for(int i=0;i<n-1;i++)
    {
        if(value[i].first>value[i+1].first)
        {flag=true;break;}
        
        
    }
    if(flag==false)
    {cout<<"Yes\n";return;}
    else
    {
        int count1=0;
        int count0=0;
        
        for(int i=0;i<n;i++)
        {
            if(value[i].second==0)
                count0++;
            else
                count1++;
            
        }
        if(count0>0 && count1>0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    
    
        
}
    

    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
