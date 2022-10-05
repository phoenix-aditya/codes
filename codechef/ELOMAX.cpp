#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya


bool comp(pair<int,int> a, pair<int,int> b)
{
    return (a.first<b.first);
}
void solve()
{
    int mxn=505;
    int initialrating[mxn];
    bool bestrating[mxn][mxn];
    bool bestranking[mxn][mxn];
    int arr[mxn][mxn];
    int thatrating[mxn][mxn];
    int ranking[mxn][mxn];
    
    memset(bestrating, 0, sizeof(bestrating));
    memset(bestranking, 0, sizeof(bestranking));
    
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        cin>>initialrating[i];
    
    int temprating[n];
    for(int i=0;i<n;i++)
    {
        int minn=INT_MIN;
        int index=0;
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            temprating[i]=initialrating[i]+arr[i][j];
            thatrating[i][j]=initialrating[i]+arr[i][j];
            initialrating[i]=thatrating[i][j];
            if(thatrating[i][j]>minn)
            {
                minn=temprating[i];
                index=j;
            }
            
        }
        bestrating[i][index]=true;
    }
    for(int i=0;i<m;i++)
    {
        vector<pair<int,int>> val;
        for(int j=0;j<n;j++)
        {
            val.push_back({thatrating[j][i],j});
        }
        sort(val.rbegin(),val.rend(), comp);
        int iit=1;
        int zt=1;
        int prev=-1;
        for(auto x: val)
        {
            if(prev==-1)
            {ranking[x.second][i]=iit;prev=x.first;}
            
            if(x.first==prev)
                ranking[x.second][i]=iit;
            else
            {
                ranking[x.second][i]=zt;
                prev=x.first;
                iit=zt;
            }
            zt++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int bestrank=INT_MAX;
        int index=-1;
        for(int j=0;j<m;j++)
        {
            if(ranking[i][j]<bestrank)
            {
                bestrank=ranking[i][j];
                index=j;
            }
        }
        bestranking[i][index]=true;
    }
    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(bestranking[i][j]!=bestrating[i][j])
            {ans+=1;break;}
        }
    
    cout<<"rating\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<bestrating[i][j]<<" ";
        cout<<endl;
    }
    cout<<"ranking\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<bestranking[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<thatrating[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<ranking[i][j]<<" ";
        cout<<endl;
    }
     
    cout<<ans<<endl;
        
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
