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

//aditya ranaut- phoenix_adityav


ll mincoins(vector<ll> coins, ll n, ll s){
    
    ll toreturn=LLONG_MAX;
    bool t[n+1][s+1];
    memset(t, 0, sizeof(t));
    
    for(ll i=0;i<=n;i++){
        t[i][0]=true;
    }
    for(ll i=1;i<=s;i++){
        t[0][i]=false;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(coins[i-1]<=j)
                t[i][j]=t[i-1][j]|t[i-1][j-coins[i-1]];
            else
                t[i][j]=t[i-1][j];
        }
    }
    
    for(int i=s/2;i>=0;i--){
        if(t[n][i]==true){
            toreturn=s-2*i;
            break;
        }
    }
    
    return toreturn;
}
void solve()
{
    ll ans=-1;
    ll n,k,temp;
    cin>>n>>k;
    vector<ll> coins;
    
    for(int i=0;i<n;i++){
        cin>>temp;
        coins.push_back(temp);
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());
    
    ll sum=0;
    vector<ll> toput;
    
    for(int i=0;i<coins.size();i++){
        toput.push_back(coins[i]);
        sum+=coins[i];
        
        if(sum>=2*k){
            ll temper=mincoins(toput, i+1, sum);
            if(temper>LLONG_MAX-1){
                cout<<-1<<endl;
                return;
            }
            
            ans=sum-temper;
            if(ans/2>=k){
                cout<<i+1<<endl;
                return;
            }
        }
    }

    cout<<-1<<endl;
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

/*
 1
 2
 2 -2 1
 1 2
 
 */
