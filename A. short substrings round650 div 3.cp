#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
void solve()
{
    string s;
    cin>>s;
    string answer;
    answer=answer+s[0];
    char prev=s[0];
    for(int i=1;i<s.size();i+=2)
    {
            answer=answer+s[i];
    }
    cout<<answer<<endl;
    
}



int main()
{
    // remove speed line
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
