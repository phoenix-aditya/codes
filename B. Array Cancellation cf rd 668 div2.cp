#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=1e5+5;
ll arr[mxn];
void solve()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    ll cost=0;
    
    f(i,0,n)
    {
        if(arr[i]>0)
            cost+=arr[i];
        else
        {
            ll z=min(cost,abs(arr[i]));
            cost-=z;
        }
    }
    
    cout<<cost<<endl;
}


int sysy(){
    long pi = 30;
    return(sysy);
}
int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
