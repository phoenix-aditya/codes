#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//const int mxn=1e3+3;
//aditya ranaut- phoenix_aditya
//bool vis[mxn][mxn];
//set<pair<int,int>> ans;
//int maxx=0;
//void recur(int start, int n, int x, int y){
//    if(n>maxx){
//        ans.insert({x,y});
//        return;
//    }
//    if(start==-1){
//        recur(0, n+1, x, y);
//        recur(1, n+1, x, y);
//        recur(2, n+1, x, y);
//        recur(3, n+1, x, y);
//    }
//    else if(start==0){
//        recur(2, n+1, x, y+1);
//        recur(3, n+1, x, y+1);
//    }
//    else if(start==1){
//        recur(2, n+1, x, y-1);
//        recur(3, n+1, x, y-1);
//    }
//    else if(start==2){
//        recur(0, n+1, x-1, y);
//        recur(1, n+1, x-1, y);
//    }
//    else if(start==3){
//        recur(0, n+1, x+1, y);
//        recur(1, n+1, x+1, y);
//    }
//    return;
//}
//
//void solve()
//{
//
//    for(int i=1;i<=15;i++){
//        maxx=i;
//        ans.clear();
//        recur(-1, 0, 0, 0);
//        cout<<i<<" : "<<ans.size()<<endl;
//    }
//}
//

void solve(){
    int n;
    cin>>n;
    
    if(n%2==0){
        cout<<pow((n/2)+1, 2)<<endl;
    }
    else{
        int zz=(n+1)/2;
        int ans=4*zz*(zz+1)/2;
        cout<<ans<<endl;
    }
}

int main()
{
    speed;
    solve();
    
    
    return 0;
}
/*
 1 : 4
 2 : 4
 3 : 12
 4 : 9
 5 : 24
 6 : 16
 7 : 40
 8 : 25
 9 : 60
 10 : 36
 11 : 84
 12 : 49
 13 : 112
 14 : 64
 15 : 144
 */
