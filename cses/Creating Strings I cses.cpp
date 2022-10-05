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
set<string> uniq;

void permute(string s, int l, int r)
{
    if(l==r)
    {
        uniq.insert(s);
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[l], s[i]);
        permute(s, l+1, r);
        swap(s[l],s[i]);
    }
}
void solve()
{
    string s;
    cin>>s;
    permute(s, 0, s.size()-1);
    cout<<uniq.size()<<endl;
    for(auto s:uniq)
    {
        cout<<s<<endl;
    }
}



int main()
{
    speed;
    solve();
    
    return 0;
}
