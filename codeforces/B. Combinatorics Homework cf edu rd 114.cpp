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

/*
 2 2 2
 ABCABC
 2 2 1
 ABCAB
 3 1 1
 ABACA
 4 2 1
 AAAABBC
 3 2 2
 ABABCAC
 AABACBC
 AAABCBC
 AABBCCA
 
 5 2 2
 ABABACACA
 */
void solve()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    
    ll maxpairspos=(a-1)+(b-1)+(c-1);
    vector<ll> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    ll zz=nums[2]-(nums[0]+nums[1]+1);
    ll minpairspos=zz>0?zz:0;
    
    if(m>=minpairspos && m<=maxpairspos){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
