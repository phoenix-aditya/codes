#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;


//aditya ranaut- phoenix_aditya

void solve(){
    
    ll n,m,keto;
    cin>>n>>m>>keto;

  //  cout<<"nmk: "<<endl;
  //  cout<<n<<m<<keto<<endl;
    ll cumulative[n][m];
    
    ll ans=0;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            
            cin>>cumulative[i][j];
          //  cout<<cumulative[i][j]<<" ";
          //  cout<<"keto: "<<cumulative[i][j]-keto<<endl;
            cumulative[i][j]=cumulative[i][j]-keto;
           // cout<<cumulative[i][j]<<" ";
            if(cumulative[i][j]>=0){
                ans++;
            }
             
        }
      //  cout<<endl;
    }
   // cout<<"matrix: "<<endl;
    
    
   // cout<<ans<<endl;
    for(int i=1;i<n;i++){
        cumulative[i][0]+=cumulative[i-1][0];
    }
    for(int i=1;i<m;i++){
        cumulative[0][i]+=cumulative[0][i-1];
    }
    f(i,1,n){
        f(j,1,m){
            cumulative[i][j]+=cumulative[i-1][j];
            cumulative[i][j]+=cumulative[i][j-1];
            cumulative[i][j]-=cumulative[i-1][j-1];
        }
    }
    
    ll s=2,temp;
    while(s<=n){
        for(int i=0;i<n-s+1;i++){
            for(int j=0;j<m-s+1;j++){
                temp=cumulative[i+s-1][j+s-1];
                
                if(j>0)temp-=cumulative[i+s-1][j-1];
                if(i>0)temp-=cumulative[i-1][j+s-1];
                if(i>0 && j>0)temp+=cumulative[i-1][j-1];
                
                if(temp>=0)
                    ans++;
            }
        }
        s++;
    }
   
    cout<<ans<<endl;
}

int main()
{
    speed;
    wh(t)
    solve();
    
    return 0;
}


