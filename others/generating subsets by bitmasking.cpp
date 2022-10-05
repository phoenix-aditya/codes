#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>



void subsett(int n)
{
    vector<int> subset;
    for(int i=0;i<(1<<n);i++)
    {
        subset.clear();
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                subset.push_back(j);
            }
        }
        for(auto x:subset)
            cout<<x<<" ";
        cout<<endl;

    }
}


int main()
{
    subsett(3);

    return 0;
}
