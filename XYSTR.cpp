#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>
void solve()
{
    string s;
    cin>>s;
    int pairs=0;
    
    char prev=s[0];
    for(int i=1;i<s.size();i++)
    {
    
        if(s[i]==prev)
        {}
        else
        {pairs++;i++;}
        
        prev=s[i];
        
    }
    cout<<pairs<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
