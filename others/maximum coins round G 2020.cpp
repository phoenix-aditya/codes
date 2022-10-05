#include<bits/stdc++.h>
#define ll long long
using namespace std;


//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll arr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll max[n];
    ll max2[n];
    memset(max, 0ll, sizeof(max));
    memset(max2, 0ll, sizeof(max2));
    
    for(int i=0;i<n;i++)
    {
        int startrow=0;
        int startcol=i;
        
        while(startcol<n && startrow<n)
        {
            max[i]+=arr[startrow][startcol];
            startrow++;
            startcol++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int startrow=i;
        int startcol=0;
        
        while(startcol<n && startrow<n)
        {
            max2[i]+=arr[startrow][startcol];
            startrow++;
            startcol++;
        }
    }
    ll ans=0;
    sort(max,max+n);
    sort(max2,max2+n);
    
    ans=max[n-1]>max2[n-1]?max[n-1]:max2[n-1];
//    for(int i=0;i<n;i++)
//        cout<<max[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<n
//        ;i++)
//        cout<<max2[i]<<" ";
//    cout<<endl;
        
    cout<<ans<<endl;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {cout<<"Case #"<<i<<": ";
        solve();
    }
    
    return 0;
}
