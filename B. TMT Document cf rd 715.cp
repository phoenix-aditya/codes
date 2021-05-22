#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
bool func(string s){
    vector<int> t;
    vector<int> m;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='T')
            t.push_back(i);
        else
            m.push_back(i);
    }
    if(t.size()!=2*m.size())
        return false;
    
    for(int i=0;i<m.size();i++){
        if(m[i]<t[i] || m[i]>t[i+m.size()])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int tcount=0;
    int mcount=0;
    for(char c: s){
        if(c=='T')
            tcount++;
        else
            mcount++;
    }
    if(tcount!=2*mcount){
        cout<<"NO\n";
        return;
    }
    
    if(func(s))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
}

//TTTMTTMTTMMTTMTMTT

int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
