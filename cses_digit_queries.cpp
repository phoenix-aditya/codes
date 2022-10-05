#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef unsigned long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define wh(t) ll t;cin>>t;while(t--)
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define f(i,a,b) for(ll i=a;i<b;++i)
 
// aditya ranaut - phoenix_aditya
 
ll power(ll num, ll n){
    ll res = 1;
    for(ll i=1;i<=n;i++){
        res*=num;
    }
    return res;
}

void solve(){
    int q;
    cin>>q;
 
    for(int i=0;i<q;i++){
        ll k; cin>>k;
        ll number_of_digits = 1;
 
        ll base_number = 0;
        ll num = 0, temp = 0;
        while(1){ 
            num = temp;
            temp += number_of_digits*(9*power(10, number_of_digits-1));
            if(k<=temp) break;
            number_of_digits++;
        }
 
        // cout<<"base_number"<<base_number<<endl;
        // cout<<"number_of_digits"<<number_of_digits<<endl;
        // cout<<"k"<<k<<endl;
        ll which_number_digit_lie_in = (k-(num+1))/number_of_digits;
        
        // cout<<"which_number_digit_lie_on"<<which_number_digit_lie_in<<endl;
        ll that_number =power(10, number_of_digits-1)+which_number_digit_lie_in;
        // cout<<"that number"<<that_number<<endl;
        ll loc = (k-(num+1))%number_of_digits;
        // cout<<"loc"<<loc<<endl;
        cout<<to_string(that_number)[loc]<<endl;
    }
}
 
int main(){
    fast;
    solve();
    
    return 0;
}
