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

void switchup(char &n){
    if(n=='R') n='B';
    else n='R';
    return; 
}

bool valid(string &s){
    char next = s[0];
    switchup(next);
    for(int i=1;i<s.length();i++){
        if(s[i]==next){
            switchup(next);
        }else{
            return false;
        }
    }
    return true;
}

bool fits(string s1, string s2){
    // cout<<s1<<" "<<s2<<endl;
    if(s1[s1.length()-1]!=s2[s2.length()-1] && valid(s2)) return true;
    return false;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string s1, s2;
    cin>>s1>>s2;
    int validtill1 = 0;
    int validtill2 = 0;
    char next1, next2;
    if(s1[0]=='R') next1 = 'B';
    if(s1[0]=='B') next1 = 'R';
    if(s2[0]=='R') next2 = 'B';
    if(s2[0]=='B') next2 = 'R';

    for(int i=1;i<s1.length();i++){
        if(s1[i]==next1){
            switchup(next1);
            validtill1++;
        }
        else{
            break;
        }
    }

    for(int i=1;i<s2.length();i++){
        if(s2[i]==next2){
            switchup(next2);
            validtill2++;
        }
        else{
            break;
        }
    }
    if(valid(s1) && valid(s2)){
        cout<<"YES\n";
        return;
    }
    // cout<<validtill1<<" "<<validtill2<<endl;
    if(validtill1==s1.length()-1 && validtill2!=s2.length()-1){
        if(fits(s1, s2.substr(validtill2+1, s2.length()-(validtill2+1)))){
            cout<<"YES\n";
            return;
        }
    }

    if(validtill2==s2.length()-1 && validtill1!=s1.length()-1){
        if(fits(s2, s1.substr(validtill1+1, s1.length()-(validtill1+1)))){
            cout<<"YES\n";
            return;
        }
    }    
    cout<<"NO\n";
    return;
}

int main(){
    fast;
    wh(t)
        solve();
    
    return 0;
}