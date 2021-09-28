#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=1e6+5;
int st[mxn]={0};

void buildtree(int arr[], int stpos, int si, int ei)
{
    if(si==ei)
    {st[stpos]=arr[si];return;}
    
    int mid=(si+ei)/2;
    buildtree(arr, 2*stpos, si, mid);
    buildtree(arr, 2*stpos+1, mid+1, ei);
    
    st[stpos]=min(st[2*stpos],st[2*stpos+1]);
}

int query(int stpos, int si,int ei,int qsi,int qei)
{
    if(qei<si || qsi>ei)
        return INT_MAX;
    
    else if(si>=qsi && ei<=qei)
    {
        return st[stpos];
    }
    int mid=(si+ei)/2;
    
    int l=query(2*stpos, si, mid, qsi, qei);
    int r=query(2*stpos+1, mid+1, ei, qsi, qei);
    
    return min(l,r);
    
}


void solve()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    f(i,0,n)
    cin>>arr[i];
    
    buildtree(arr, 1, 0, n);
    
    int q;
    cin>>q;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        
        cout<<query(1, 0, n, l, r);
        cout<<endl;
    }
    
}



int main()
{
    speed;
    
    solve();
    
    return 0;
}
