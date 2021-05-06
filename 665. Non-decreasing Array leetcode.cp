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
bool checkPossibility(vector<int>& nums) {
    int outofplace=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            if(i==1 || nums[i-2]<=nums[i]){
                nums[i-1]=nums[i];
            }else{
                nums[i]=nums[i-1];
            }
            outofplace++;
        }
        
    }
    if(outofplace>1)
        return false;
    return true;
}

int main()
{
    speed;
    vector<int> v{1,3,2,4,5};
    cout<<checkPossibility(v);
    return 0;
}

