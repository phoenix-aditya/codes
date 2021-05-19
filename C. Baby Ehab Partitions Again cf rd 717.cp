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

bool dp[105][200005];

bool func(ll arr[], ll n, ll total){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=total;j++){
            if(i==0) dp[i][j]=false;
            if(j==0) dp[i][j]=true;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=total;j++){
            if(j>=arr[i-1]){
                dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][total];
}

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll total=0;
    f(i,0,n){
        cin>>arr[i];
        total+=arr[i];
    }
    // if sum is odd
    if(total%2!=0 || func(arr, n, total/2)==false){
        cout<<0<<endl;
        return;
    }
    // if sum even made it odd by removing odd digit
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    
    //if sum is even & all elements are even
    // we keep dividing by 2 until we get an odd number, then we remove it
    while(1){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                arr[i]/=2;
            }
            if(arr[i]%2!=0){
                cout<<1<<endl;
                cout<<i+1<<endl;
                return;
            }
        }
    }
}



int main()
{
    speed;
    solve();
    
    
    return 0;
}

/*
 100
 12 140 16 128 120 20 52 12 24 172 188 76 16 176 124 36 36 168 172 192 8 80 184 200 196 100 16 92 108 96 156 108 76 44 164 124 112 84 44 168 36 180 176 96 56 164 96 132 168 116 60 56 140 192 28 84 88 152 184 148 76 144 112 192 80 44 136 160 24 108 20 164 132 28 64 88 24 148 172 64 180 20 104 8 100 40 112 128 188 68 152 84 164 164 100 48 88 192 12 1172
 */
