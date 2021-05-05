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
int lengthOfLongestSubstring(string s) {
    int ans=0;
    int lastindex[256];
    memset(lastindex, -1, sizeof(lastindex));
    
    int start=0;
    for(int end=0;end<s.length();end++){
        start=max(start, lastindex[s[end]]+1 );
        ans=max(ans, end-start+1);
        lastindex[s[end]]=end;
    }
        
    return ans;
}

int main()
{
    speed;
    cout<<lengthOfLongestSubstring("dvdf");
    
    return 0;
}

