#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void printqueue(queue<int> q)
{
    if(q.size()==0)
    {cout<<endl;return;}
    int temp=q.front();
    cout<<temp<<" ";
    q.pop();
    printqueue(q);
    q.push(temp);
}

int main()
{
    queue<int> q;
    stack<int> s;
    
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        q.push(temp);
    }
    ll half=q.size()/2;
    
    //first half out
    for(int i=0;i<half;i++)
    {
        s.push(q.front());
        q.pop();
    }
    printqueue(q);
    
//    first half back in
    while(s.size()!=0)
    {
        q.push(s.top());
        s.pop();
    }
    printqueue(q);
//    second half out
    for(int i=0;i<half;i++)
    {
        q.push(q.front());
        q.pop();
    }
    printqueue(q);
//    second half back in
    while(s.size()!=0)
    {
        q.push(s.top());
        s.pop();
    }printqueue(q);
    
    for(int i=0;i<half;i++)
    {
        s.push(q.front());
        q.pop();
    }
printqueue(q);
    while(s.size()!=0)
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    printqueue(q);
    
    cout<<"interleaved queue: ";
    printqueue(q);
    
    return 0;
}
