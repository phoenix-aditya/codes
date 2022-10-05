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
    ll n, q;
    cin>>n>>q;

    string arr;
    cin>>arr;

    int counter = 0;
    
    for(int i=2;i<n;i++){
        if(arr[i-2]=='a' && arr[i-1]=='b' && arr[i]=='c'){
            counter++; 
        }
    }
    while(q--){
        int index;
        char c;
        cin>>index>>c;
        index-=1;
        if(c=='a'){
                if(index+2<n && arr[index+1]=='b' && arr[index+2]=='c' && arr[index]!='a'){
                    counter++;
                }
                if(arr[index]=='b' && (index-1)>=0 && (index+1)<n){
                     if(arr[index-1]=='a' && arr[index+1]=='c'){
                           counter--;
                       }
                 }
                    if(arr[index]=='c' && (index-2)>=0){
                        if(arr[index-2]=='a' && arr[index-1]=='b'){
                            counter--;
                        }
                    }
            }
            
        else if(c=='b'){
            if(index-1>=0 && index+1<n && arr[index]!='b' && arr[index+1]=='c' && arr[index-1]=='a'){
                    counter++;
                }
                    if(arr[index]=='a' && index+2<n){
                        if(arr[index+1]=='b' && arr[index+2]=='c'){
                            counter--;
                        }
                    }
                    if(arr[index]=='c' && (index-2)>=0){
                       if(arr[index-2]=='a' && arr[index-1]=='b'){
                           counter--;
                       }
                    }
            
        }
        else if(c=='c'){
            if((index-2)>=0 && arr[index-1]=='b' && arr[index-2]=='a' && arr[index]!='c'){
                    counter++;
                }
                    if(arr[index]=='b' && (index-1)>=0 && (index+1)<n){
                        if(arr[index-1]=='a' && arr[index+1]=='c'){
                            counter--;
                        }
                    }
                    if(arr[index]=='a' && (index+2)<n){
                        if(arr[index+1]=='b' && arr[index+2]=='c'){
                            counter--;
                        }
                    }
                
        }
        cout<<counter<<endl;
        arr[index]=c;
    }
}



int main(){
    fast;

    solve();
    
    return 0;
}