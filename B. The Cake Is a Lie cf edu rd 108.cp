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


void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    
   // cout<<n<<m<<k<<endl;

    ll zeta=m-1;
    ll gamma=n-1;
    ll alpha=gamma*m;
    alpha+=zeta;
    if(alpha==k){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}



int main()
{
    speed;
    wh(t)
    {solve();}
    
    return 0;
}
