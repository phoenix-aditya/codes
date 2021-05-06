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
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1])
            ans.push_back(nums[i]);
    }
    return ans;
}

int main()
{
    speed;
    vector<int> v{1,3,2,2,4,3,5};
    vector<int> veto=findDuplicates(v);
    for(auto x: veto)cout<<x<<" ";
    cout<<endl;
    return 0;
}

