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
const int mxn=1299709;
vector<ll> prime;
bool checker[mxn]={0};

void generateprimes()
{
    for(int i=2;i<=mxn;i++)
    {
        if(checker[i])
            continue;
        prime.push_back(i);
        for(int j=2*i;j<=mxn;j+=i)
            checker[j]=1;
    }
}

void solve()
{
    ll n;
    cin>>n;
    map<ll,ll> counter;
    ll arr[n];
    f(i,0,n)
    {
        cin>>arr[i];
        if(!counter[arr[i]])
            counter[arr[i]]=1;
        else
            counter[arr[i]]++;
    }
    ll ans[n];
    memset(ans, 0, sizeof(ans));
    
    ll pos=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i]!=0)
            continue;
        else
        {
            ll toput;
            if(ans[arr[i]-1]==0)
            {toput=prime[pos];pos++;}
            else
                toput=ans[arr[i]-1];
            ans[i]=toput;
            ans[arr[i]-1]=toput;
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    
}



int main()
{
    //    auto start = high_resolution_clock::now();
    generateprimes();
//    cout<<prime.size()<<endl;
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
