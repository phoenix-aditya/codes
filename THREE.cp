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

void solve()
{
    string s;
    cin>>s;
    
    set<char> yoyo;
    
    for(char x:s){
        yoyo.insert(x);
    }
    
    int pairs=s.length()-yoyo.size();
    int numbers=s.length()-2*pairs;
    
    int ans=0;
    
    if(pairs==0)
        ans=0;
    
    else{
        if(pairs>numbers){
            ans+=numbers;
            
            pairs=pairs-numbers;
            numbers=0;
          //  cout<<pairs<<endl;
            int leftover=0;
            while(pairs>0){
                if(leftover==0)
                {
                    leftover+=2;
                    pairs-=1;
                }
                
                if(pairs>0){
                    if(leftover>0)
                    {
                        ans++;
                        pairs-=1;
                        leftover--;
                    }
                }
               // cout<<pairs<<endl;
            }
        }
        else
        {
            ans+=pairs;
        }
    }
    cout<<ans<<endl;
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
