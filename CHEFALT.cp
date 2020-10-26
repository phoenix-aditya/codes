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

void solve()
{
    int n;
    int sum1=0;
    int sum2=0;
    cin>>n;
    
    int arr[n];
    
    f(i,0,n)
    cin>>arr[i];
    
    for(int i=0;i<n;i+=2)
        sum1+=arr[i];
    if(n>1)
    {for(int i=1;i<n;i+=2)
        sum2+=arr[i];
    }
    if(sum1>sum2)
        cout<<sum1<<endl;
    else
        cout<<sum2<<endl;
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
