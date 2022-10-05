#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
using namespace std;
#include<string.h>

int main()
{
    string a="abc";
    
    do{
        for(auto x: a)
            cout<<x<<" ";
        cout<<endl;
        
    }while(next_permutation(a.begin(), a.end()));
    
    
    return 0;
}
