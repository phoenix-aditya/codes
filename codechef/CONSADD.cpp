#include<bits/stdc++.h>
#include<chrono>
#include<string.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using namespace std::chrono;

//aditya ranaut- phoenix_aditya
const int C=1e3+3;
const int R=1e3+3;
ll mat1[R][C];
ll mat2[R][C];

int isequal(ll r,ll c){
    f(i,0,r){
        f(j,0,c){
            if(mat1[i][j]!=mat2[i][j])
                return false;
        }
    }
    return true;
}

void takeinput(ll r, ll c){
    
    f(i,0,r){
        f(j,0,c){
            cin>>mat1[i][j];
        }
    }
    
    f(i,0,r){
        f(j,0,c){
            cin>>mat2[i][j];
        }
    }
}

void solve()
{
    ll r,c,x;
    cin>>r>>c>>x;
    
    takeinput(r,c);
    
    if(isequal(r, c)){
        cout<<"Yes\n";return;
    }
    else if(r<x){
        f(i,0,r){
            f(j,0,c-x+1){
                if(mat1[i][j]==mat2[i][j])continue;
                ll d=mat2[i][j]-mat1[i][j];
                f(zeta,0,x){
                    mat1[i][j+zeta]+=(d);
                }
            }
        }
        if(isequal(r, c)){
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
        return;
    }
    
    else if(c<x){
        for(int i=0;i<c;i++){
            for(int j=0;j<(r-x+1);j++){
                if(mat1[j][i]==mat2[j][i])continue;
                ll d=mat2[j][i]-mat1[j][i];
                for(int zeta=0;zeta<x;zeta++){
                    mat1[j+zeta][i]+=(d);
                }
            }
        }
        if(isequal(r, c)){
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
        return;
    }
    
    else if(r>=x && c>=x){
        f(i,0,r){
            f(j,0,c-x+1){
                if(mat1[i][j]==mat2[i][j])continue;
                ll d=mat2[i][j]-mat1[i][j];
                f(zeta,0,x){
                    mat1[i][j+zeta]+=(d);
                }
            }
        }
        f(i,0,c){
            f(j,0,r-x+1){
                if(mat1[j][i]==mat2[j][i])continue;
                ll d=mat2[j][i]-mat1[j][i];
                f(zeta,0,x){
                    mat1[j+zeta][i]+=(d);
                }
            }
        }
//        cout<<"MAT1: \n";
//        f(i,0,r){
//            f(j,0,c){
//                cout<<mat1[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        cout<<"MAT2: \n";
//        f(i,0,r){
//            f(j,0,c){
//                cout<<mat2[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        if(isequal(r, c)){
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
        return;
    }
    cout<<"No\n";
}

int main()
{
    //    auto start = high_resolution_clock::now();
    
    speed;
    wh(t){
    solve();
    }
    
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //
    //      cout << "Time taken by function: "
    //           << duration.count() << " microseconds" << endl;
    
    return 0;
}
