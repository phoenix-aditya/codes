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
bool comp(vector<int> a, vector<int> b){
    pair<int, int> aa, bb;
    aa.first=a[0];
    aa.second=a[1];
    bb.first=b[0];
    bb.second=b[1];
    
    return aa<bb;
}
int findLongestChain(vector<vector<int>>& pairs) {
    sort(pairs.begin(), pairs.end(), comp);
    vector<vector<int>> taken;
    int n=pairs.size();
    vector<int> dp(n,1);
    int ans=1;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(pairs[i][0]>pairs[j][1]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        ans=max(ans, dp[i]);
    }
    return ans;
    
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
