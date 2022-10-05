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
    
    int n,temp;
    set<int> s;
    set<int> s2;
    vector<int> answer;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        s.insert(temp);}
    
    for(int i=1;i<=1024;i++)
    {
        s2.clear();
        int flag=0;
        for(auto x: s)
        {
            s2.insert(x^i);
        }
        for(auto x:s)
        {
            if(!s2.count(x))
            {flag=1;break;}
        }
        if(flag==0)
            answer.push_back(i);
    }
     if(answer.size()==0)
         cout<<-1<<endl;
    
    else
    {
        sort(answer.begin(),answer.end());
        cout<<answer[0]<<endl;
        
        
        
    }
  
    }
    




int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
