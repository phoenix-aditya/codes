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

void setbit(ll &num, ll pos){
    num|=(1<<pos);
}
ll noofbits(ll num){
    ll maxsetbit=0;
    for(int i=0;i<30;i++){
        if(num&(1<<i))
            maxsetbit=i;
    }
    return maxsetbit;
}

bool isset(ll num, ll pos){
    return num&(1<<pos);
}
void solve()
{
    ll c;
    cin>>c;
    ll bits=noofbits(c);
    ll a=0;
    setbit(a, bits);
    ll b=0;
    
    for(int i=0;i<bits;i++){
        if(isset(c, i)){
            setbit(b, i);
        }
        else{
            setbit(a, i);
            setbit(b, i);
        }
    }
    cout<<a*b<<endl;
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

