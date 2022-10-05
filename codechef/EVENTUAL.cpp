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

bool stringcheker(string &s)
{
    map<char,int> value;
    
    for(char x:s)
    {
        if(!value[x])
            value[x]=1;
        else
            value[x]++;
        
    }
    for(auto x:value)
    {
        if(x.second%2!=0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    
    string str;
    cin>>str;
    
    if(stringcheker(str))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
