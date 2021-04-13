#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxn=1e6+6;
int t[101][mxn];
int numberofways(int coins[], int n, int total)
{
    //dp array initialization of row 0 and col 0
    //for having sum x with no coins we would need infinite number of no coins therefore
    //we initialize the row with INT_MAX
    for(int i=1;i<total+1;i++){
        t[0][i]=1e9;
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<total+1;j++)
        {
            if(j-coins[i]>=0)
                t[i][j]=min(t[i-1][j], 1+t[i][j-coins[i]]);
            else
                t[i][j]=t[i-1][j];
        }
    }
    
    
    return t[n][total];
}

int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    
    int coins[n+1];
    for(int i=1;i<=n;i++){
        cin>>coins[i];
    }
    
    
    ll ans=numberofways(coins, n, sum);
    if(ans==1e9)cout<<-1;
    else cout<<ans;
    
    return 0;
}
