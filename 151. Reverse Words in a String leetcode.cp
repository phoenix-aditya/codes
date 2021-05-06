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
string reverseWords(string s) {
    vector<string> ret;
    string temp="";
    char spac=' ';
    for(char c: s){
        if(c==spac){
            if(temp.length()>0)
                ret.push_back(temp);
            temp="";
        }else{
            temp+=c;
        }
    }
    if(temp.length()>0)ret.push_back(temp);
    reverse(ret.begin(),ret.end());
    string ans="";
    for(string x: ret){
        ans+=x;
        ans+=" ";
    }
    return ans.substr(0,ans.length()-1);
}

int main()
{
    speed;
    cout<<reverseWords("sky is blue");
    return 0;
}

