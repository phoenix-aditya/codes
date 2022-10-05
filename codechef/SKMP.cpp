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
    string s, p;
    cin>>s;
    cin>>p;
    
    set<char> letters;
    map<char,int> count;
    
    for(char x: s)
    {
        letters.insert(x);
        
        if(!count[x])
            count[x]=1;
        else
            count[x]++;
    }
    bool character=false;
    for(char x: p)
    {
      count[x]--;
    }
    
    for(int i=0;i<p.size()-1;i++)
    {
        if(p[i+1]>p[i])
            character=true;
    }
    
    string ans1="";
    string ans2="";
    for(auto z: letters)
    {
        if(z==p[0])
        {
            ll k=count[z];
                while(k>0)
                {
                    ans2+=z;
                    k--;
                }
                ans2+=p;
            
                ans1+=p;
                while(count[z]>0)
                {
                    ans1+=z;
                    count[z]--;
                }
        }
        while(count[z]>0)
        {
            ans1+=z;
            ans2+=z;
            count[z]--;
        }
    }
//    for(auto x: count)
//    {
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    
    if(ans1>ans2)
        cout<<ans2<<endl;
    else
        cout<<ans1<<endl;
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

/*
 3
 akramkeeanany
 aka
 supahotboy
 bohoty
 daehabshatorawy
 badawy
 
 1
 zetaabcdefghijklmnopqrstuvwx
 zeta
 
 2
 aaaabbbbc
 ba
 aaaabbbbc
 bc
 */
/*
 aaakaeekmnnry
 abohotypsu
 aabadawyehhorst
 */
