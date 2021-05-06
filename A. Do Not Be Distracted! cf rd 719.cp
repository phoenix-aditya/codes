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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    char curr=' ';
    map<char,int> freq;
    
    for(char c: s){
        if(freq.find(c)==freq.end()){
            curr=c;
            freq.insert({c,1});
        }else if(freq[c]>0 && c!=curr){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
