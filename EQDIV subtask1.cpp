[11:59 AM, 9/14/2020] aditya_ranaut: ok
[11:59 AM, 9/14/2020] aditya_ranaut: simple array lelo na
[12:00 PM, 9/14/2020] Arjun Bhaiya Tiet: #include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,k;
    cin>>k>>t;
    unordered_map<int,string> freq;
    freq[0]="";
    freq[1]="0";
    freq[2]="01";
    freq[3]="001";
    freq[4]="0110";
    while(t--){
        int n;
        cin>>n;
        if(n%4==1 || n%4==2){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
        cout<<freq[n%4];
        while(n>=4){
            cout<<freq[4];
            n=n-4;
        }
        cout<<"\n";
    }
    return 0;
}
