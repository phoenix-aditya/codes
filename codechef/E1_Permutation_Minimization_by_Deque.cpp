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
  
void printdq(deque <ll> g)
{
    deque <ll> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout <<*it<<" ";
    cout << '\n';
}
void solve()
{
    ll n;
    cin>>n;

    deque<ll> dq;
    ll temp;
    f(i,0,n){
        cin>>temp;
        if(dq.size()>0){
        if(temp<dq.front()){
            dq.push_front(temp);
        }else{
            dq.push_back(temp);
        }
        }
        else{
            dq.push_front(temp);
        }
    }
    printdq(dq);
    
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}