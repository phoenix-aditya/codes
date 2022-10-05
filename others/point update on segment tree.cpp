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

void update(int arr[],int stpos, int si, int ei, int updating)
{
    if(si==ei)
    {
        st[stpos]=arr[si];
        return;
    }
    int mid=(si+ei)/2;
    
    if(updating<=mid)
        update(arr, 2*stpos, si, mid, updating);
    else
        update(arr, 2*stpos+1, mid+1, ei, updating);
    
    st[stpos]=min(st[2*stpos],st[2*stpos+1]);
}


void solve()
{
    int arr[]={1,2,2,-3,4,-1};
    int n=sizeof(arr)/sizeof(int);
    
    
    buildtree(arr, 1, 0, n);
    
    cout<<query(1, 0, n, 0, 2);
    
    arr[1]=-2;
    
    update(arr, 1, 0, n, 1);
    
    cout<<query(1, 0, n, 0, 2);
    
    
    
}



int main()
{
    speed;
    
    solve();
    
    return 0;
}
