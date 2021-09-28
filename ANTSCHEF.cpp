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
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,m,temp;
    cin>>n;
    
    vector<ll> ants[n];
    map<ll,ll> counter;
    ll pos=0;
    ll neg=0;
    
    f(i,0,n){
        cin>>m;
        f(j,0,m){
            cin>>temp;
            ants[i].push_back(temp);
            counter[abs(temp)]++;
            if(temp<0)neg++;
            else pos++;
        }
        sort(ants[i].begin(), ants[i].end());
    }
    if(n==1){
        cout<<neg*pos<<endl;
        return;
    }
    
    ll ans=0;
    vector<ll> ntemp;
    vector<ll> ptemp;
    
    
    f(i,0,n){
        ntemp.clear();
        ptemp.clear();
        queue<ll> negative;
        queue<ll> positive;
        
        for(auto x:ants[i]){
            if(x>0)ptemp.push_back(x);
            else ntemp.push_back(x);
        }
        sort(ptemp.begin(), ptemp.end());
        sort(ntemp.rbegin(), ntemp.rend());
        for(auto x:ptemp)
            positive.push(x);
        for(auto x:ntemp)
            negative.push(x);
        
        
        while(!negative.empty() || !positive.empty()){
            
            if(!negative.empty() && !positive.empty()){
                
                if(abs(negative.front())>=positive.front()){
                    if(counter[positive.front()]>1)
                    {ans+=positive.size()-1;positive.pop();}
                    else
                    {ans+=negative.size();positive.pop();}
                }
                
                else{
                    if(counter[abs(negative.front())]>1)
                    {ans+=negative.size()-1;negative.pop();}
                    else
                    {ans+=positive.size();negative.pop();}
                }
            }
            
            else if(!positive.empty()){
                if(counter[positive.front()]>1)
                {ans+=positive.size()-1;positive.pop();}
                else
                {ans+=negative.size();positive.pop();}
            }
            
            else{
                if(counter[abs(negative.front())]>1)
                {ans+=negative.size()-1;negative.pop();}
                else
                {ans+=positive.size();negative.pop();}
            }
        }
    }
    for(auto x:counter)
        if(x.second>1)
            ans++;
    
    cout<<ans<<endl;
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
