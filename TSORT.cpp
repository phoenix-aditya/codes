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
    vector<int> num;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        num.push_back(x);
        
    }
    sort(num.begin(),num.end());
    
    for(auto x:num)
    {
        cout<<x<<endl;
        
    }
    
}



int main()
{
    speed;
   
    solve();
    
    return 0;
}
