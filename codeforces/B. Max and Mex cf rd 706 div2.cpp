#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
ll maxcalc(set<ll> s){
    return *s.rbegin();
}
ll mexcalc(set<ll> s){
    int i=0;
    for(auto x:s){
        if(x!=i)
            return i;
        i++;
    }
    return maxcalc(s)+1;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    
    set<ll> arr;
    vector<ll> mexlist;
    ll temp;
    f(i,0,n){
        cin>>temp;
        arr.insert(temp);
    }
    
    if(k==0){
        cout<<arr.size()<<endl;
        return;
    }
    
    ll max=maxcalc(arr);
    ll mex=mexcalc(arr);
    
    ll sizebefore=arr.size();
    arr.insert(ceil(1.0*(mex+max)/2));
    ll sizeafter=arr.size();
    if(sizebefore!=sizeafter){
        k-=1;
    }
    
    if(arr.size()==maxcalc(arr)+1){
        cout<<arr.size()+k<<endl;
        return;
    }
    cout<<arr.size()<<endl;
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t){
    solve();
    }
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
