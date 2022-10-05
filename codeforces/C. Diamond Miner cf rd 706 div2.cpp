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

void solve()
{
    ll n;
    cin>>n;
    ll temp1,temp2;
    vector<ll> posminer;
    vector<ll> posdiamond;

    
    ll z=2*n;
    while(z--){
        cin>>temp1>>temp2;
        if(temp2==0){
            //miner
            if(temp1>0)posminer.push_back(temp1);
            else posminer.push_back(-1*temp1);
        }
        else{
            //diamond
            if(temp2>0)posdiamond.push_back(temp2);
            else posdiamond.push_back(-1*temp2);
        }
    }
    sort(posminer.begin(), posminer.end());
    sort(posdiamond.begin(), posdiamond.end());
    
    double ans=0;
    for(int i=0;i<min(posminer.size(),posdiamond.size());i++){
        double a=posminer[i]*posminer[i];
        double b=posdiamond[i]*posdiamond[i];
        double toadd=sqrt(a+b);
        ans+=toadd;
    }
    cout<<setprecision(16)<<ans<<endl;
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
