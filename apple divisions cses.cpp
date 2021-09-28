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
    ll n;
    cin>>n;
    ll p[n];
    ll sum=0;
    
    f(i,0,n)
    {cin>>p[i];sum+=p[i];}
    
    set<ll> answers;
    
    ll max=pow(2,n);
    ll tempsum=0;
    for(int j=0;j<max;j++)
    {
        tempsum=0;
        for(int i=0;i<n;i++)
        {
            if(j&(1<<i))
                tempsum+=p[n-(1+i)];
        }
        answers.insert(tempsum);
    }
//    cout<<"sum: "<<sum<<endl;
//    for(auto x:answers)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;
    
    ll ans=INT_MAX;
    for(auto x:answers)
    {
        ll sum1=sum-x;
        ll sum2=x;
        if(abs(sum1-sum2)<ans)
            ans=abs(sum1-sum2);
    }
    cout<<ans<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
