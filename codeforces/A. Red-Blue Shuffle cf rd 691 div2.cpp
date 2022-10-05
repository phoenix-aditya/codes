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
    int n;
    cin>>n;
    
    string red,blue;
    cin>>red>>blue;
    
    
    int chancesred=0;
    int chancesblue=0;
    
    for(int i=0;i<n;i++){
        if(red[i]>blue[i])
            chancesred++;
        else if(blue[i]>red[i])
            chancesblue++;
    }
    
    if(chancesred>chancesblue)
    {
        cout<<"RED\n";
    }
    else if(chancesblue>chancesred)
        cout<<"BLUE\n";
    else
        cout<<"EQUAL\n";
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    
    return 0;
}
