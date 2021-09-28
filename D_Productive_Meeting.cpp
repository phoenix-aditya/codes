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

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    f(i,0,n) cin>>arr[i];

    priority_queue< pair<int,int> > pq;
    f(i,0,n){
        pair<int, int> pp=make_pair(arr[i], i);
        pq.push(pp);
    }
    vector< pair<int,int> > ans;
    while(1){
        if(pq.size()<=1){
            break;
        }
        pair<int,int> one=pq.top();
        pq.pop();
        pair<int,int> two=pq.top();
        pq.pop();

        for(int i=0;i<min(one.first, two.first);i++){
            ans.push_back(make_pair(one.second, two.second));
            one.first--;
            two.first--;
        }
        if(one.first!=0){
            pq.push(one);
        }
        if(two.first!=0){
            pq.push(two);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
    }
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}