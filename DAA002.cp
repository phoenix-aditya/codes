#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
const int mxn=1e3+3;
int arr[mxn][mxn];
int m,n;
void finalmerge(int rfinalstart, int rfinalend, int cfinalstart, int cfinalend){
    
    for(int i=rfinalstart;i<=rfinalend;i++){
        vector<int> zz;
        for(int j=cfinalstart;j<=cfinalend ;j++){
            zz.push_back(arr[i][j]);
        }
        sort(zz.begin(), zz.end());
        for(int j=cfinalstart, k=0 ;j<=cfinalend && k<zz.size() ;j++,k++){
            arr[i][j]=zz[k];
        }
    }
    
//    cout<<"row: \n";
//    for(int i=rfinalstart;i<=rfinalend;i++){
//        for(int j=cfinalstart;j<=cfinalend;j++){
//            cout<<arr[i][j]<<" ";
//        }cout<<endl;
//    }
//    cout<<endl;
    
    for(int i=cfinalstart;i<=cfinalend;i++){
        vector<int> zz;
        for(int j=rfinalstart;j<=rfinalend;j++){
            zz.push_back(arr[j][i]);
        }
        sort(zz.begin(), zz.end());
        
        for(int j=rfinalstart, k=0;j<=rfinalend && k<zz.size();j++,k++){
            arr[j][i]=zz[k];
        }
    }
//    cout<<"col: \n";
//    for(int i=rfinalstart;i<=rfinalend;i++){
//        for(int j=cfinalstart;j<=cfinalend;j++){
//            cout<<arr[i][j]<<" ";
//        }cout<<endl;
//    }
//    cout<<endl;
}

void mergesort(int rstart, int rend, int cstart, int cend){
    if(rstart<0 || rend<0 || rstart>m || rend>m || cstart<0 || cstart>n || cend<0 || cend>n)
        return;
    if(rstart>=rend && cstart>=cend){
        return;
    }
    int rmid=rstart+(rend-rstart)/2;
    int cmid=cstart+(cend-cstart)/2;
    mergesort(rstart, rmid, cstart, cmid);
    mergesort(rmid+1, rend, cstart, cmid);
    mergesort(rstart, rmid, cmid+1, cend);
    mergesort(rmid+1, rend, cmid+1, cend);
    
    finalmerge(rstart, rend, cstart, cend);
}

void solve()
{
    cin>>m>>n;
    
    f(i,0,m){
        f(j,0,n){
            cin>>arr[i][j];
        }
    }
    mergesort(0, m-1, 0, n-1);
    
    f(i,0,m){
        f(j,0,n){
            cout<<arr[i][j]<<" ";
        }
    }
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
