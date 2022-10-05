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

void solve()
{
    int n,m;
    cin>>n>>m;
    
    ll arr[n][m];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    
    
    ll ans=0;
    vector<ll> numbers;
    
    for(int r1=0,r2=n-1;r1<=r2;r1++,r2--)
    {for(int c1=0,c2=m-1;c1<=c2;c1++,c2--)
    {
        numbers.clear();
        numbers.push_back(arr[r1][c1]);
        numbers.push_back(arr[r1][c2]);
        numbers.push_back(arr[r2][c1]);
        numbers.push_back(arr[r2][c2]);
        
        sort(numbers.begin(),numbers.end());
        ll num= numbers[1]<=numbers[2]?numbers[1]:numbers[2];
        
        if(r1==r2)
        {
            if(c1!=c2)
            {
                ans=ans+abs(arr[r1][c1]-num)+abs(arr[r1][c2]-num);
            }
            else
            {
                ans=ans+abs(arr[r1][c1]-num);
            }
        }
        else
        {
            if(c1!=c2)
            {
                ans=ans+abs(arr[r1][c1]-num)+abs(arr[r1][c2]-num)+abs(arr[r2][c1]-num)+abs(arr[r2][c2]-num);
            }
            else
            {
                ans=ans+abs(arr[r1][c1]-num)+abs(arr[r2][c1]-num);
            }
        }
    }
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
