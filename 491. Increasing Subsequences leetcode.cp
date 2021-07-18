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
set<vector<int>> ansfinal;
void recur(vector<int>& nums, int pos , vector<int>& ans){
    if(pos>=nums.size()){
        if(ans.size()>1)
            ansfinal.insert(ans);
        return;
    }
        
    if(ans.size()==0 || nums[pos]>=ans[ans.size()-1]){
        ans.push_back(nums[pos]);
        recur(nums, pos+1, ans);
        ans.pop_back();
        recur(nums, pos+1, ans);
    }else{
        recur(nums, pos+1, ans);
    }
}
vector<vector<int>> findSubsequences(vector<int>& nums) {
    vector<int> ans;
    recur(nums,0,ans);
    vector<vector<int>> ansf;
    for(auto x: ansfinal){
        ansf.push_back(x);
    }
    return ansf;
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
