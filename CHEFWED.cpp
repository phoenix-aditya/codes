#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // 1 case
    int ans=k;
    vector<int> freq(101,0);
    vector<int> input(101,0);
    for(int i=0;i<n;i++){
        if(freq[arr[i]]){
            ans+=k;
            freq=vector<int>(101,0);
        }
        freq[arr[i]]++;
        input[arr[i]]++;
    }
    int total=0;
    for(int i=1;i<=100;i++){
        if(input[i]>=2)
            total+=input[i];
    }
    ans=min(ans,total+k);
    // n cases
    int cost=k+k;
    int newTotal=0;
    freq=vector<int>(101,0);
    for(int i=0;i<n-1;i++){
        freq[arr[i]]++;
        input[arr[i]]--;
        if(freq[arr[i]]>2){
            newTotal++;
        }else if(freq[arr[i]]==2){
            newTotal+=2;
        }
        if(input[arr[i]]==1){
            total-=2;
        }else if(input[arr[i]]>=2){
            total--;
        }
        ans=min(ans,cost+total+newTotal);
    }
    cout<<ans<<"\n";
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
