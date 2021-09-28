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
    int prev=-1, curr=-1;
    

    int flag=0;
    for(int j=0;j<n;j++)
    {
        prev=-1;
        for(int i=0;i<n;i++)
    {
        if(prev==-1)
        {
            cin>>curr;
            prev=curr;
            continue;
            
        }
        cin>>curr;
        if(curr==1 && prev==1)
        {
            flag=1;
            break;
        }
        prev=curr;
        
    }
    
    }
    
    if(flag==1)
    cout<<"UNSAFE\n";
    else
    cout<<"SAFE\n";
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
