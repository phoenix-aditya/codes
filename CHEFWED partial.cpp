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


const int mxn=1e3+5;
int arr[mxn];
const int zz=101;
int lookup[zz]={0};

void solve()
{
    memset(lookup, 0, sizeof(lookup));
    int n, k;
    cin>>n>>k;
    
    f(i,0,n)
    cin>>arr[i];
    
    int cost=k;
    
    for(int i=0;i<n;i++)
    {
        if(lookup[arr[i]]>0)
        {
            memset(lookup, 0, sizeof(lookup));
            lookup[arr[i]]++;
            cost+=k;
        }
        else
        {
            lookup[arr[i]]++;
        }
//        cout<<arr[i]<<" "<<cost<<endl;
    }
    cout<<cost<<endl;
}



int main()
{
    speed;
    wh(t)
    {solve();}
    
    return 0;
}
