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


// scrambled string
// checking if 2 string given, if one in scrambled version of the given first string

//given- 1. first make a binary tree
//       2. no child should be empty in binary tree
//       3. we can swap in non leaf nodes ie. swap the childs of non leaf nodes
//       4. the strings we get after swapping, are scrambled strings


//

map<pair<string,string>,bool> dp;


bool scrambledstring(string a, string b){
    ll n=a.size();
    if(a==b){
        return dp[{a,b}]=true;
    }
    else{
        if(!dp[{a,b}]){
            for(int i=1;i<n;i++){
                if(scrambledstring(a.substr(0,i), b.substr(n-i,i)) + scrambledstring(a.substr(n-i,i), b.substr(0,i))){
                    return dp[{a,b}]=true;
                }
                if(scrambledstring(a.substr(0,i), b.substr(0,i))+scrambledstring(a.substr(i,n-i), b.substr(i,n-i))){
                    return  dp[{a,b}]=true;
                }
            }
            return dp[{a,b}]=false;
        }
        else{
            return dp[{a,b}];
        }
    }
}

void solve()
{
    cout<<scrambledstring("great", "rgate")<<endl;
}

int main()
{
    speed;
    solve();
    
    return 0;
}
