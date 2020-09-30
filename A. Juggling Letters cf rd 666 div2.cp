#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    int n;
    string s;
    map<char, int> counter;
    cin>>n;
    int totalcal=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        
        for(char x: s)
        {
            totalcal++;
            if(!counter[x])
                counter[x]=1;
            else
                counter[x]++;
        }
    }
    if(totalcal%n!=0)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        for(auto x:counter)
        {
            if(x.second%n!=0)
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
