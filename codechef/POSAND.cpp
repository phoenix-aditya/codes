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

int setbits(ll n)
{
    int counter=0;
    while(n>0)
    {
        if(n&(1<<0))
            counter++;
        n=n>>1;
    }
    return counter;
}

void solve()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(setbits(n)==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<"2 3 1 ";
        for(int i=4;i<=n;i++)
        {
            if(setbits(i)==1 && i%2==0)
            {
                cout<<i+1<<" "<<i<<" ";
                i+=1;
                continue;
            }
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
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
