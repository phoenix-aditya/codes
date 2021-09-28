#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) ll t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

ll power(ll i, ll j, ll sheetcount,ll k)
{
    return (k+1)-(abs(j-i)+sheetcount);
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    ll ans=0;
    
    queue<tuple<char,int,int>> q;
    int shields=0;
    tuple<char,int,int> temp;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='X')
        {
            while (q.size()!=0) {
                q.pop();
            }
            continue;
        }
        
        if(!q.empty())
            temp=q.front();
            
        if(s[i]=='M' && (q.size()==0||get<0>(temp)=='M'))
        {
            q.push({s[i],i,shields});
        }
        else if(s[i]=='I' && (q.size()==0 ||get<0>(temp)=='I'))
        {
            q.push({s[i],i,shields});
        }
        else if(s[i]=='I' && get<0>(temp)=='M')
        {
            bool uhoh=false;
            while(!uhoh && power(get<1>(temp), i, shields-get<2>(temp), k)<=0)
            {
                q.pop();
                if(q.empty())
                {uhoh=true;break;}
                else
                temp=q.front();
            }
            if(!uhoh)
            {
                ans++;
                //cout<<i<<" "<<get<1>(temp)<<" "<<power(get<1>(temp), i, shields-get<2>(temp), k)<<endl;
                q.pop();
            }
            else
            {
                q.push({s[i],i,shields});
            }
        }
        else if(s[i]=='M' && get<0>(temp)=='I')
        {
            bool uhoh=false;
            while(!uhoh && power(get<1>(temp), i, shields-get<2>(temp), k)<=0)
            {
                q.pop();
                if(q.empty())
                {uhoh=true;break;}
                else
                temp=q.front();
            }
            if(!uhoh)
            {
            ans++;
                //cout<<i<<" "<<get<1>(temp)<<" "<<power(get<1>(temp), i, shields-get<2>(temp), k)<<endl;
            q.pop();
            }
            else
            {
                q.push({s[i],i,shields});
            }
            
        }
        if(s[i]==':')
        shields++;
    }
    
    
    cout<<ans<<endl;
}



int main()
{
//        auto start = high_resolution_clock::now();
    
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
//
//        auto stop = high_resolution_clock::now();
//        auto duration = duration_cast<microseconds>(stop - start);
//
//          cout << "Time taken by function: "
//               << duration.count()/1000 << " microseconds" << endl;
    
    return 0;
}
