#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>
int n=3;
vector<int> subset;

void subsett(int k)
{
        if(k>=n)
    {
        for(auto x:subset)
        {cout<<x<<" ";}
        cout<<endl;
    }
    else
    {
        subsett(k+1);
        subset.push_back(k);
        
        subsett(k+1);
        subset.pop_back();
        
    }
}


int main()
{
    subsett(0);

    return 0;
}
