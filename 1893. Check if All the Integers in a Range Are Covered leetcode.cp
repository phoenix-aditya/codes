#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    set<int> r;
    for(auto x: ranges){
        for(int i=x[0];i<=x[1];i++){
            r.insert(i);
        }
    }
    
    for(int i=left;i<=right;i++){
        if(r.count(i)==0)
            return false;
    }
    return true;
}

void solve()
{
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
