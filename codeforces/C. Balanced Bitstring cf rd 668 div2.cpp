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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    bool ans=true;
    
    vector<char> v(k,'?');
    
    for(int i=0;i<k;i++)
    {
        for(int j=i;j<s.size();j+=k)
        {
            if(s[j]=='?')
                continue;
            if(v[i]=='?' || v[i]==s[j])
                v[i]=s[j];
            else if(v[i]!=s[j])
                ans=false;
        }
    }
    int c0=0,c1=0;
    for(int i=0;i<k;i++)
    {
        if(v[i]=='1')
            c1++;
        if(v[i]=='0')
            c0++;
    }
    if(c1>k/2 || c0>k/2)
        ans=false;
    
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
