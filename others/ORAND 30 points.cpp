#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

int main()
{
    //    auto start = high_resolution_clock::now();
    speed;
    
    wh(t){
    ll n,m;
    cin>>n>>m;
    
    vector<ll> a;
    vector<ll> b;
    
    ll temp;
    f(i,0,n){
        cin>>temp;
        a.push_back(temp);
    }
    f(i,0,m){
        cin>>temp;
        b.push_back(temp);
    }
    
    set<ll> ans;
    stack<ll> s;
    
    ans.insert(0);
    s.push(0);
    
    while(!s.empty()){
        ll x=s.top();
        s.pop();
        
        f(i,0,n){
            ll y=a[i];
            ll z=x|y;
            if(!ans.count(z)){
                s.push(z);
                ans.insert(z);
            }
        }
        f(i,0,m){
            
            ll y=b[i];
            ll z=x&y;
            if(!ans.count(z)){
                s.push(z);
                ans.insert(z);
            }
        }
    }
    
    ll toans=ans.size();
    cout<<toans<<endl;
    }
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}

/*
 1
 2
 2 -2 1
 1 2
 
 */
