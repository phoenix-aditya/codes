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
const int mxn=1e9+7;

int divide(int dividend, int divisor) {
        long long divi=dividend;
        long long diviso=divisor;
        long long num=0;

        
        long long ans=divi/diviso;
        
        if(ans>pow(2,31)-1) return pow(2,31)-1;
        else if(ans<-1*pow(2,31)) return -1*pow(2,31);
        return ans;
    }


int main()
{
    speed;
    vector<int> v{-1,-1,-1,-1,2,2,-2,-2};
    int k=3;
    cout<<divide(2, 3);
    
    return 0;
}

