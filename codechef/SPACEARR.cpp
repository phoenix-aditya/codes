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
const int mxn=2*1e5+5;
ll arr[mxn];

void solve()
{
    ll n;
    cin>>n;
    f(i,0,n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    ll totsum=0;
    f(i,0,n){
        if((i+1)>=arr[i])
            totsum+=((i+1)-arr[i]);
        else{
            cout<<"Second\n";
            return;
        }
    }
    
    if(totsum%2==0){
        cout<<"Second\n";
    }
    else{
        cout<<"First\n";
    }
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

