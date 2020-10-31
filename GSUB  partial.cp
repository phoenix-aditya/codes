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

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,q;
    cin>>n>>q;
    
    ll arr[n];
    f(i,0,n)
    {
        cin>>arr[i];
    }
    
    ll x,y;
    while(q--)
    {
        vector<ll> numbers;
        vector<ll> possans;
        possans.push_back(1);
        cin>>x>>y;
        arr[x-1]=y;
        
        
        
        for(int i=0;i<n;i++)
        {
            if(numbers.size()==0)
            {
                numbers.push_back(arr[i]);
                continue;
            }
            if(numbers[numbers.size()-1]!=arr[i])
            {
                numbers.push_back(arr[i]);
            }
            else
            {
                continue;
            }
        }
        possans.push_back(numbers.size());

        sort(possans.begin(), possans.end());
        cout<<possans[possans.size()-1]<<endl;
    }
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
