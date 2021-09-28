#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)v
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=1e6+6;
ll t1[mxn];
ll t2[mxn];
ll zeros[mxn];
ll ones[mxn];

void initializezeroes(string s,ll n){
    int pos=-1;
    
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            for(int j=pos+1;j<=i;j++)
                zeros[j]=i;
                pos=i;
        }
    }
    for(int i=pos+1;i<n;i++){
        zeros[i]=n;
    }
}

void initializeones(string s, ll n){
    int pos=-1;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            for(int j=pos+1;j<=i;j++)
                ones[j]=i;
                pos=i;
        }
    }
    for(int i=pos+1;i<n;i++)
        ones[i]=n;
}

void dp(string s, ll n){
    t1[n]=0;
    t2[n]=0;
    t1[n+1]=0;
    t2[n+1]=0;
    
    for(int i=n-1;i>=0;i--){
        
        t1[i]=t1[i+1];
        t2[i]=t2[i+1];
        
        if(s[i] == '1' && zeros[i] <n)
             t1[i]=max(t1[i],t1[zeros[i]+1]+1);
        
        if(s[i] == '0' && ones[i] < n)
            t1[i]=max(t1[i],t1[ones[i]+1]+1);
       
        if(ones[i] < n)
        t2[i]=max(t2[i],t1[ones[i]+1]+1);
    }
}
void solve(){
    
    string s;
    cin>>s;
    
    ll n=s.length();
    
    initializezeroes(s, n);
        
    if(zeros[0] == n){
        cout<<"0"<<endl;
        return;
    }
    initializeones(s, n);
        
    dp(s, n);
    
    ll l=t2[0]+1;
    ll index=ones[0]+1;
    string ans="";
    ans+='1';
    
    for(int i=1;i<l;i++)
    {
        if(index >= n){
            ans+='0';
            continue;
            }
        if(zeros[index] >= n){
            ans+='0';
            index=zeros[index]+1;
            continue;
            }
        if(t1[zeros[index]+1] <(l-i-1)){
            ans+='0';
            index=zeros[index]+1;
            }
        else{
            ans+='1';
            index=ones[index]+1;
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

