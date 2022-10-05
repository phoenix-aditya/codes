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

void operation(string &s , int i)
{
    string part1=s.substr(0,i);
    string part2=s.substr(i);
    
    reverse(part1.begin(), part1.end());
    
    for(int j=0;j<i;j++)
    {
        if(part1[j]=='0')
            part1[j]='1';
        else
            part1[j]='0';
        
//        cout<<part1<<endl;
    }
//    cout<<part1<<" "<<part2<<endl;
    s=part1+part2;
}

void solve()
{
    int n;
    cin>>n;
    
    string a;
    string b;
    cin>>a>>b;
    vector<int> pb;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==b[i])
            continue;
        
        else
        {
            if(a[i]==a[0])
            {
                operation(a, i+1);
                pb.push_back(i+1);
            }
            else
            {
                pb.push_back(1);
                operation(a, 1);
                pb.push_back(i+1);
                operation(a, i+1);
                
            }
            
        }
//        cout<<a<<endl;
    }
//    cout<<a<<endl;
    cout<<pb.size()<<" ";
    for(auto x:pb)
    {
        cout<<x<<" ";
        
    }
    cout<<endl;
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
