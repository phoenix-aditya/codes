#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>

int numberof[1001];
bool check[1001];

void solve()
{
    memset(numberof,0,sizeof(numberof));
    memset(check,false,sizeof(check));
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        numberof[arr[i]]++;
    }
    sort(numberof,numberof+1001);
    
    
   
    for(int i=1001-n;i<=1000;i++)
    {
        if(numberof[i]==0)
            continue;
        if(numberof[i]==numberof[i+1])
        {
            cout<<"NO\n";
            return;
        }
    }
    
    bool flag=true;

    for(int i=0;i<n;i++)
    {
        if(check[arr[i]]==true)
            flag=false;
        
        else
        {
            check[arr[i]]=true;
            int temp=arr[i];
            
            while(temp==arr[i])
                i++;
            
            i=i-1;
        }
    }
    
    
    
    
    
    if(flag==true)
    cout<<"YES\n";
    else
        cout<<"NO\n";
    
}



int main()
{
    
    
    wh(t)
     {solve();}
    
    return 0;
}
/*
 
 5
 6
 1 1 4 2 2 2
 10
 1 1 1 1 4 3 4 7 7 7
 8
 1 7 7 3 3 4 4 4
 7
 1 1 1 3 4 5 4
 9
 1 1 1 1 1 2 2 2 3
 */
