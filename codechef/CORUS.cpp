#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
using namespace std;
#include<string.h>
void solve()
{
    ll n,q;
    cin>>n>>q;
    
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s<<"\n";
    int counter=0;
    int max=0;
    char prev;
    
    prev=s[0];
    counter++;
    //cout<<s.size()<<prev<<"\n";
    vector<int> p;
    for(int i=1;i<=s.size();i++)
    {
        
        if(prev==s[i])
        {
            counter++;
            continue;
            
        }
        else
        {
            p.push_back(counter);
            counter=1;
            prev=s[i];
            
        }
        
      
    }
    if(p.size()==0)
        p.push_back(counter);
    
    sort(p.begin(),p.end(),greater<int>());
    
    int sum=0;
    
    while(q--)
    {
        ll query;
        cin>>query;
        sum=0;
        
        for(int i=0;i<p.size();i++)
        {
            if(p[i]>query)
            {
                sum=sum+(p[i]-query);
                
            }
            
        }
        cout<<sum<<"\n";
        
    }
    
    
}



int main()
{
    wh(t)
     {solve();}
    
    return 0;
}
