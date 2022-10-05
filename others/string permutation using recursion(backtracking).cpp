#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>

void permut(string a, int l, int r)
{
    if(l==r)
        cout<<a<<endl;
    
    for(int i=l;i<=r;i++)
    {
        swap(a[l],a[i]);
        permut(a, l+1, r);
        swap(a[l],a[i]);
    }
}


int main()
{
    string a="abc";
    permut(a, 0, a.size()-1);
    return 0;
}
