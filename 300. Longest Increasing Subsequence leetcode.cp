#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        for(auto x: nums){
            auto it=lower_bound(temp.begin(),temp.end(), x);
            if(it==temp.end())
                temp.push_back(x);
            else
                *it=x;
        }
        return temp.size();
    }

int main()
{
    vector<int> nums={1,2,3,4};
    cout<<lengthOfLIS(nums);
    return 0;
}
