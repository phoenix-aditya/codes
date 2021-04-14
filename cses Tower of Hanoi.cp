#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
vector<pair<int,int>> ans;

void towerofhanoi(int n, int s, int d, int h){
    if(n==1){
        ans.push_back({s,d});
        return;
    }
    towerofhanoi(n-1, s, h,d);
    ans.push_back({s,d});
    towerofhanoi(n-1, h, d, s);
}

void solve()
{
    int n;
    cin>>n;
    
    towerofhanoi(n, 1, 3,2);
    
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
}



int main()
{
    speed;
    solve();
    
    return 0;
}
