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
    int n, m, k;
    cin>>n>>m>>k;
    
    if(m==0 || n==m)
        cout<<0<<endl;
    
    else
    {
        
        int noofcards=n/k;
        
        if(m<=noofcards)
            cout<<m<<endl;
        
        else
        {
            cout<<noofcards-ceil((1.0*(m-noofcards))/(k-1))<<endl;
            
        }
        
        
        
    }
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
