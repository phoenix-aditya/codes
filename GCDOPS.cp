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
const int mxn=1e4+4;

bool composite[mxn]={0};

set<int> prime;

void gen()
{
    for(int i=2;i<=mxn;i++)
    {
        if(composite[i])
            continue;
        prime.insert(i);
        for(int j=2*i;j<=mxn;j+=i)
            composite[j]=1;
    }
}

void solve()
{
    ll n;
    cin>>n;
    
    int b[n];
    
    f(i,0,n)
    cin>>b[i];
    
    for(int i=0;i<n;i++)
    {
        if(b[i]>(i+1))
        {
            cout<<"NO\n";
            return;
        }
        else if((i+1)%b[i]!=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    
    cout<<"YES\n";
}



int main()
{
    
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    gen();
    wh(t)
     {solve();}
    
    return 0;
}
