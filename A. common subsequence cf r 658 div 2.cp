#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

// the value of mxn should be 1005
const int mxn=1000005;
int a[mxn];
int b[mxn];

void solve()
{
    int n,m;
    cin>>n>>m;
    
    f(i,0,n)
    cin>>a[i];
    f(i,0,m)
    cin>>b[i];
    
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<"YES\n";
                cout<<1<<" ";
                cout<<a[i]<<endl;
                return;
            }
        }
    
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
