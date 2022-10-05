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
map<char,ll> values;
void solve()
{
    values.clear();
    string s;
    
    
    cin>>s;
    
    for(char x: s)
    {
        if(!values[x])
            values[x]=1;
        else
            values[x]++;
    }
    ll x1, y1;
    cin>>x1>>y1;
    
    ll q;
    cin>>q;
    ll x2, y2, diff1, diff2, val;
    while(q--)
    {
        cin>>x2>>y2;
        diff1=x1-x2;
        diff2=y1-y2;
        if(diff1==0 && diff2==0){
            cout<<"YES 0\n";
            continue;
        }
        if(diff1>0)
        {
            if(diff2>0)
            {
                diff1=abs(diff1);
                diff2=abs(diff2);
                if(diff1>values['L'] || diff2>values['D'])
                {
                    cout<<"NO\n";
                }
                else
                    cout<<"YES"<<" "<<diff1+diff2<<"\n";
            }
            else if(diff2<=0)
            {
                diff1=abs(diff1);
                diff2=abs(diff2);
                if(diff1>values['L'] || diff2>values['U'])
                {
                    cout<<"NO\n";
                }
                else
                    cout<<"YES"<<" "<<diff1+diff2<<"\n";
            }
            
        }
        else
        {
            if(diff2>0)
            {
                diff1=abs(diff1);
                diff2=abs(diff2);
                if(diff1>values['R'] || diff2>values['D'])
                {
                    cout<<"NO\n";
                }
                else
                    cout<<"YES"<<" "<<diff1+diff2<<"\n";
            }
            else if(diff2<=0)
            {
                diff1=abs(diff1);
                diff2=abs(diff2);
                if(diff1>values['R'] || diff2>values['U'])
                {
                    cout<<"NO\n";
                }
                else
                    cout<<"YES"<<" "<<diff1+diff2<<"\n";
            }
            
        }
    
        
        
        
    }
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
