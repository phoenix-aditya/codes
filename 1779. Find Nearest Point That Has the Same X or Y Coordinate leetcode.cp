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
int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    int dist=INT_MAX;
    int index=0;
    int ans=-1;
    for(auto xeta: points){
        if(x==xeta[0] || y==xeta[1]){
            int temp=abs(x-xeta[0])+abs(y-xeta[1]);
            if(dist>temp){
                dist=temp;
                ans=index;
            }
        }
        index++;
    }
    return ans;
}

void solve()
{
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
