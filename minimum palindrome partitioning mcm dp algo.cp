#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

bool  ispalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])
            return false;
    }
    return true;
}

int palinpartition(string s, int i, int j){
    if(i>=j)
        return 0;
    if(ispalindrome(s.substr(i,j-i+1)))
        return 0;
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        int temp= 1+palinpartition(s, i, k)+palinpartition(s, k+1, j);
        ans=min(ans, temp);
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<palinpartition(s, 0, s.length()-1)<<endl;
    return 0;
}
