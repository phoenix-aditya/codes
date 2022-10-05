#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define m 1000000007
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n;
    cin>>n;
    
    ll arr[n];
    f(i,0,n)
    cin>>arr[i];
    if(n==1)
    {
        ll ans=0;
        bool lastchanged=false;
        if(arr[0]%2==0)
        {ans=arr[0]-1;lastchanged=true;}
        else
            ans=arr[0];
        
        ll q,r;
        cin>>q;
        while(q--)
        {
            cin>>r;
            if(lastchanged && arr[0]!=1)
                cout<<((r*ans)%m+1)%m<<endl;
            else
                cout<<(r*ans)%m<<endl;
            continue;
        }
        return;
    }
    else if(arr[0]==1)
    {
        ll q,r;
        cin>>q;
        while(q--)
        {
            cin>>r;
            ll div=r/n;
            if(r==1)
            {
                cout<<arr[0]<<endl;
                continue;
            }
            ll rem=r%n;
            if(rem==1)
            {
                cout<<div%m<<endl;
                continue;
            }
            else if(rem>1)
            {
                cout<<(div+1)%m<<endl;
            }
            else
                cout<<div%m<<endl;
        }
    }
    else if(arr[n-1]==1)
    {
        ll q,r;
        cin>>q;
        ll sum=0;
        bool ischanged[n];
        memset(ischanged, 0, sizeof(ischanged));
        ll sumarr[n];
        if(arr[0]%2==0)
            sumarr[0]=arr[0];
        else
        {
            sumarr[0]=arr[0]-1;
            ischanged[0]=true;
        }
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                sumarr[i]=(sumarr[i-1]+arr[i])%m;
            }
            else
            {
                sumarr[i]=(sumarr[i-1]+(arr[i]-1))%m;
                ischanged[i]=true;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                sum=(sum+arr[i])%m;
                break;
            }
            if(arr[i]%2==0)
                sum=(sum+arr[i])%m;
            else
                sum=(sum+(arr[i]-1))%m;
        }
        
        ll ans=0;
        while(q--)
        {
            ans=0;
            cin>>r;
            ll div=r/n;
            ll rem=r%n;
            ans=(ans+(div*sum)%m)%m;
            if(rem==0)
            {
                cout<<ans<<endl;
                continue;
            }
            else
            {
                ans=(ans+sumarr[rem-1])%m;
                if(ischanged[rem-1])
                    ans+=1;
                cout<<ans<<endl;
            }
        }
        
    }
    else
    {
        ll q, r;
        cin>>q;
        
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]==1)
            {
                if(arr[i]%2==0)
                    sum=(sum+(arr[i]-1))%m;
                else
                    sum=(sum+arr[i])%m;
            }
            else
            {
                if(arr[i]%2==0)
                    sum=(sum+arr[i])%m;
                else
                    sum=(sum+(arr[i]-1))%m;
            }
        }
        if(arr[n-1]%2==0)
        {sum=(sum+(arr[n-1]-1))%m;}
        else
            sum=(sum+arr[n-1])%m;
        
        ll sumarr[n];
        bool ischanged[n];
        memset(ischanged, 0, sizeof(ischanged));
        
        if(arr[0]%2==0 && arr[1]!=1)
        {sumarr[0]=arr[0];}
        else if(arr[0]%2==0 && arr[1]==1)
        {
            sumarr[0]=arr[0]-1;
            ischanged[0]=true;
        }
        else if(arr[0]%2!=0 && arr[1]==1)
        {
            sumarr[0]=arr[0];
        }
        else
        {
            sumarr[0]=arr[0]-1;
            ischanged[0]=true;
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]==1)
            {
                sumarr[i]=sumarr[i-1];
                ischanged[i]=true;}
            else if(arr[i+1]==1 && arr[i]%2==0)
            {
                sumarr[i]=(sumarr[i-1]+(arr[i]-1))%m;
                ischanged[i]=true;
            }
            else if(arr[i+1]==1 && arr[i]%2!=0)
            {
                sumarr[i]=(sumarr[i-1]+arr[i])%m;
            }
            else if(arr[i]%2==0)
            {
                sumarr[i]=(sumarr[i-1]+arr[i])%m;
            }
            else if(arr[i]%2!=0)
            {
                sumarr[i]=(sumarr[i-1]+(arr[i]-1))%m;
                ischanged[i]=true;
            }
        }
        if(arr[n-1]%2==0)
        {
            sumarr[n-1]=(sumarr[n-2]+(arr[n-1]-1))%m;
            ischanged[n-1]=true;
        }
        else
            sumarr[n-1]=(sumarr[n-2]+arr[n-1])%m;
        
//        cout<<"sum total: "<<sum<<endl;
//        cout<<"sumarr: ";
//        for(int i=0;i<n;i++)
//            cout<<sumarr[i]<<" ";
//        cout<<endl;
//        cout<<"ischanged: ";
//        f(i,0,n)
//        cout<<ischanged[i]<<" ";
//        cout<<endl;
        ll ans=0;
        while(q--)
        {
            ans=0;
            cin>>r;
            ll div=r/n;
            ll rem=r%n;
            
            ans=(div*sum)%m;
            if(rem==0)
            {
                if(ischanged[n-1])
                ans=(ans+1)%m;
                cout<<ans<<endl;
                continue;
            }
            else
            {
                ans=(ans+sumarr[rem-1])%m;
                if(ischanged[rem-1] && arr[rem-1]!=1)
                    ans+=1;
                else if(arr[rem-1]==1)
                {
                  //  if(ischanged[rem-1])
                    //    ans+=1;
                    if(rem-2>=0 && arr[rem-2]%2==0)
                        ans+=2;
                    
                }
                cout<<ans<<endl;
            }
        }
    }
}



int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
