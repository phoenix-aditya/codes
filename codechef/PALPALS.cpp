#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya



void solve()
{
    string s;
    cin>>s;
    
    map<char,int>  freq;
    for(char x:s){
        if(!freq[x])
            freq[x]=1;
        else
            freq[x]++;
    }
    int ones=0;
    int evens=0;
    
    for(auto x: freq){
        ones+=x.second%2;
        evens+=x.second/2;
    }
    if(ones<=evens){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
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

