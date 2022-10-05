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

int kthGrammar(int n, int k) {
    if(n==1 && k==1)
    {
        return 0;
    }
    int mid=pow(2,n-1)/2;
    
    if(k<=mid)
    {
        return kthGrammar(n-1,k);
    }
    else
    {
        return !kthGrammar(n-1,k-mid);
    }
}

void solve()
{
    int n,k;
    cin>>n>>k;
    
    cout<<kthGrammar(n, k)<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
