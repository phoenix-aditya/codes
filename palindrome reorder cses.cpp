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
    string s;
    cin>>s;
    
    map<char,ll> counter;
    for(char c:s)
    {
        if(!counter[c])
            counter[c]=1;
        else
            counter[c]++;
    }
    
    if(s.size()%2==0)
    {
        for(auto x:counter)
        {
            if(x.second%2!=0)
            {
                cout<<"NO SOLUTION\n";
                return;
            }
        }
        for(auto x:counter)
        {
            for(ll i=0;i<x.second/2;i++)
                cout<<x.first;
        }
        map<char,ll>::reverse_iterator x;
        for(x=counter.rbegin();x!=counter.rend();x++)
        {
            for(ll i=0;i<x->second/2;i++)
                cout<<x->first;
        }
        cout<<endl;
    }
    
    else
    {
        char middle;
        ll middleno=0;
        ll count=0;
        
        for(auto x:counter)
        {
            if(x.second%2!=0)
            {
                if(count>1)
                {
                    cout<<"NO SOLUTION\n";
                    return;
                }
                else
                {
                    count++;
                    middle=x.first;
                    middleno=x.second;
                }
            }
        }
        map<char,ll>::reverse_iterator x;
        
        for(auto x:counter)
        {
            if(x.second%2!=0)
                continue;
            for(ll i=0;i<x.second/2;i++)
                cout<<x.first;
        }
        for(ll i=0;i<middleno;i++)
            cout<<middle;
        
        for(x=counter.rbegin();x!=counter.rend();x++)
        {
            if(x->second%2!=0)
                continue;
            for(ll i=0;i<x->second/2;i++)
                cout<<x->first;
        }
        cout<<endl;
        
    }
}



int main()
{
    speed;
    solve();
    
    return 0;
}
