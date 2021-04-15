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
int longestcommonsubsequence(string s1, string s2, int n, int m){
    if(n==0 || m==0)
        return 0;
    
    if(s1[n-1]==s2[m-1]){
        return 1+longestcommonsubsequence(s1, s2,n-1,m-1);
    }
    else{
        return max(longestcommonsubsequence(s1, s2,n-1,m), longestcommonsubsequence(s1, s2,n,m-1));
    }
}


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<longestcommonsubsequence(s1, s2,s1.size(),s2.size())<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
