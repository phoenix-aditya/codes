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

string reverseOnlyLetters(string s) {
    int start=0;
    int end=s.length()-1;
    
    while(start<end){
        if((s[start]<'a' || s[start]>'z') && (s[start]<'A' || s[start]>'Z')){
            start++;
            continue;
        }
        else if((s[end]<'a' || s[end]>'z') && (s[end]<'A' || s[end]>'Z')){
            end--;
            continue;
        }
        
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

void solve()
{
    string s;
    cin>>s;
    cout<<reverseOnlyLetters(s)<<endl;
}



int main()
{
    speed;
    solve();
    
    return 0;
}
