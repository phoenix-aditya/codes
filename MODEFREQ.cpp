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
    
    map<int, int> freq;
    set<int> numbers;
    
    int c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(!freq[c])
            freq[c]=1;
        else
            freq[c]++;
        numbers.insert(c);
    }
    int num=-1;
    int maxval=0;
    
    map<int,int> mode;
    set<int> modenumbers;
    for(auto x: numbers)
    {
        if(!mode[freq[x]])
        {
            mode[freq[x]]=1;
        }
        else
            mode[freq[x]]++;
        
        modenumbers.insert(freq[x]);
    }
    
    
    for(auto x: modenumbers)
    {
        if(mode[x]>num)
        {maxval=x;num=mode[x];}
    }
    
    cout<<maxval<<endl;
    
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
