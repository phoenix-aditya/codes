#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

set<string> ans;
set<string> allcombo;

void recur(string s){
    
    allcombo.insert(s);
    
    ll n=s.length();
    
    if(n<3)
        return;
    
    for(int start=0;start<n;start++)
    {
        int count=0;

        for(int len=1;len<=n-start;len++)
        {
            string temp=s;
            string temp2=temp.substr(start,len);
            count=0;
            //might have prlbm here
            for(auto x:temp2){
                if(x=='1')
                    count++;
            }
                
            if(count%2==0 && count!=0){
                reverse(temp.begin()+start, temp.begin()+start+len);
                if(!allcombo.count(temp)){
                    recur(temp);
                }
                
            }
        }
    }
}
void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ans.clear();
    allcombo.clear();
    
    for(int start=0;start<n;start++)
    {
        for(int len=1;len<=n-start;len++)
        {
            string zeus=s.substr(start,len);
            if(!allcombo.count(zeus))
            {
                ans.insert(zeus);
                recur(zeus);}
        }
    }
    cout<<ans.size()<<endl;
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
