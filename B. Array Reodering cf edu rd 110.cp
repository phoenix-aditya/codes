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
int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> even;
    vector<int> odd;
    
    f(i,0,n){
        cin>>arr[i];
        if(arr[i]%2==0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    
    vector<int> fi;
    for(auto x: even)
        fi.push_back(x);
    for(auto x: odd)
        fi.push_back(x);
    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(fi[i], 2*fi[j])>1)
                ans++;
        }
    }
    cout<<ans<<endl;
}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
