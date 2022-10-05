#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define wh(t) ll t;cin>>t;while(t--)
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define f(i,a,b) for(ll i=a;i<b;++i)

// aditya ranaut - phoenix_aditya


void solve(){
    ll m,s;
    cin>>m>>s;

    if((m>1  && s==0)||(9*m<s)){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    string smallest_num = "";
    ll temp = s;
    int arr[m];
    f(i,0,m) arr[i]=0;

    // for largest number
    ll counter=0;
    while(temp>0){
        if(temp>=9){
            arr[counter]=9;
            temp-=9;
        }else{
            arr[counter]=temp;
            temp=0;
        }
        counter++;
    }
    string largest = "";
    for(int i=0;i<m;i++){
        largest+=to_string(arr[i]);
    }

    // smallest number
    if(s>0)
        arr[0]=1;
    f(i,1,m) arr[i]=0;
    counter=m-1;

    temp=s-1;
    
    while(temp>0){
        if(temp>=9){
            arr[counter]+=9;
            temp-=9;
        }else{
            arr[counter]+=temp;
            temp=0;
        }

        counter--;
    }
    string smallest = "";
    for(int i=0;i<m;i++){
        smallest+=to_string(arr[i]);
    }
    cout<<smallest<<" "<<largest<<endl;

}

int main(){
    fast;
    solve();
    
    return 0;
}