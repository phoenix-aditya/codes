#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int main()
{
    string s;
    cout<<"enter string : ";
    cin>>s;
    
    map<char, int> counter;
    queue<char> q;
    
    for(char x:s)
    {
        q.push(x);
        if(!counter[x])
            counter[x]=1;
        else
            counter[x]++;
        
        while(q.size()!=0)
        {
            if(counter[q.front()]>1)
            {
                q.pop();
            }
            else
            {cout<<q.front()<<" ";break;}
        }
        if(q.size()==0)
        cout<<-1<<" ";
    }
    
    return 0;
}
