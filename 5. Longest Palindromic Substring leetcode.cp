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
string longestPalindrome(string s) {
    int start=0,end=0;
    for(int k=0;k<s.length();k++){
        int i,j;
        for(i=k-1,j=k+1;i>=0 && j<s.length();i--,j++){
            if(s[i]==s[j]){
                if(abs(i-j)>abs(start-end)){
                    start=i;
                    end=j;
              //      cout<<s.substr(i,j-i+1)<<endl;
                }
            }else{
                break;
            }
        }
        
    }
    for(int k=0;k<s.length();k++){
        int i,j;
        for(i=k,j=k+1;i>=0 && j<s.length();i--,j++){
            if(s[i]==s[j]){
                if(abs(i-j)>abs(start-end)){
                    start=i;
                    end=j;
                  //  cout<<s.substr(i,j-i+1)<<endl;
                }
            }else{
                break;
            }
        }
    }
    return s.substr(start,end-start+1);
}

int main()
{
    speed;
    cout<<longestPalindrome("aacabdkacaa");
    
    return 0;
}

