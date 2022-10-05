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

void solve()
{
    ll n;
    cin>>n;
    string arr="";
    for(int i=0;i<n;i++){
        arr+='(';
    }
    for(int i=0;i<n;i++){
        arr+=')';
    }
    cout<<arr<<endl;
    for(int i=1;i<n;i++){
        swap(arr[i], arr[2*n-i-1]);
        cout<<arr<<endl;
        swap(arr[i], arr[2*n-i-1]);
    }

}



int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}
