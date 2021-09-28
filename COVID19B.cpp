#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya finally it is done
//this question is a literal nightmare

void solve()
{
    int n;
    cin>>n;
    
    float v[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<ll> possans;
    
    set<int> infect[n+1];
    
    for(int i=1;i<=n;i++)
    {
        infect[i].insert(i);
        
        for(int j=1;j<=n;j++)
        {
            if((v[j]-v[i])!=0 && v[i]!=0)
            {
                float zt=float((1.0*(i-j))/(v[j]-v[i]));
                float k=0;
                
                if(zt>k)
                {
                    infect[i].insert(j);
                }
            }
            else if(v[i]==0)
            {
                if(j<=i && v[j]!=0)
                    infect[i].insert(j);
            }
        }
    }
    
//    here
    
//    for(int i=1;i<=n;i++)
//    {for(auto x: infect[i])
//            cout<<x<<" ";
//        cout<<endl;
//    }
     
//    here
    
    set<int> temp;
    
    for(int i=1;i<=n;i++)
    {
        temp.clear();
        temp.insert(i);
        
        for(auto x: infect[i])
        {
            for(auto y: infect[x])
            {
                float st=0,et=0;
                if((v[x]-v[i])!=0)
                {st=float((1.0*(i-x))/(v[x]-v[i]));}
                    
                if((v[y]-v[x])!=0)
                {et=float((1.0*(x-y))/(v[y]-v[x]));}
                
                
                if(et>=st)
                {
//                    cout<<x<<"->"<<y<<": "<<st<<" "<<et<<endl;
                    temp.insert(y);}
            }
            
        }
            
        possans.push_back(temp.size());
//        cout<<"for "<<i<<" : "<<temp.size()<<endl;
    }
    
    sort(possans.begin(),possans.end());
    
    cout<<possans[0]<<" "<<possans[possans.size()-1]<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
