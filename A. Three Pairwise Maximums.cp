#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)

// this is not working...
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll arr[3];
    set<ll> checker;
    
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        checker.insert(arr[i]);
    }
    sort(arr,arr+3);
    if(checker.size()>2)
    {
        cout<<"NO\n";
        return;
    }
    else if(arr[1]!=arr[2])
    {
        cout<<"NO\n";
        return;
    }
    else if(checker.size()==1)
    {
        cout<<"YES\n";
        for(int i=0;i<3;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        
    }
    else
    {
        cout<<"YES\n";
        for(auto x:checker)
            cout<<x<<" ";
        cout<<1<<endl;
        
    }
    
    
    
    

}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

