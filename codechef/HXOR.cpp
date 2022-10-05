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

bool isset(ll n, ll i){
    ll z=n&(1<<i);
    if(z>0)
        return true;
    return false;
}

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    
    f(i,0,n){
    cin>>arr[i];
    }
    
    for(ll curr=0;curr<n;curr++){
        if(x<=0)
            break;
        
        for(ll i=31;i>=0;i--){
            if(x<=0)
                break;
            if(isset(arr[curr], i))
            {
                for(ll j=curr+1;j<n;j++){
                    if(x<=0)
                        break;
                    
                    if(isset(arr[j], i)){
                        ll z=1<<i;
                        arr[j]=arr[j]^z;
                        arr[curr]=arr[curr]^z;
                        x--;
                        
//                        for(ll i=0;i<n;i++)
//                        cout<<arr[i]<<" ";
//                        cout<<endl;
                        break;
                    }
                }
                if(x<=0)
                    break;
                if(isset(arr[curr], i) && curr!=n-1){
                    
                    ll z=1<<i;
                    arr[curr]=arr[curr]^z;
                    arr[n-1]=arr[n-1]^z;
                    x--;
                    

//                    for(ll i=0;i<n;i++)
//                    cout<<arr[i]<<" ";
//                    cout<<endl;
                }
            }
        }
    }
    
    if(x>0 && (x%2!=0) && n==2)
    {
        bool changed=false;
        for(int i=31;i>=0;i--){
            if(isset(arr[n-2], i) && isset(arr[n-1], i))
            {
                ll z=1<<i;
                arr[n-2]=arr[n-2]^z;
                arr[n-1]=arr[n-1]^z;
                x--;
                changed=true;
                break;
            }
        }
        
        if(!changed)
        {ll z=1;
        arr[n-1]=arr[n-1]^z;
        arr[n-2]=arr[n-2]^z;
        }
    }
    
    for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
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
