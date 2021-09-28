#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
/*
 printing pattern
 for n=5
 5 5 5 5 5 5 5 5 5
 5 4 4 4 4 4 4 4 5
 5 4 3 3 3 3 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 2 1 2 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 3 3 3 3 4 5
 5 4 4 4 4 4 4 4 5
 5 5 5 5 5 5 5 5 5
 
 */
int main()
{
    int n;
    cin>>n;
    
    for(int z=1;z<2*n;z++)
    {
        int i;
        if(z<=n)
        {
            i=z;
            int rep=(n-i)+1;
            int counter=0;
            for(int j=n;j>rep;j--)
            {
                cout<<j<<" ";
                counter++;
            }
            int left=(2*n-1)-2*counter;
        
            for(int j=0;j<left;j++)
                cout<<rep<<" ";
            for(int j=rep+1;j<=n;j++)
                cout<<j<<" ";
            cout<<endl;
        }
        else
        {
            i=z-n;
            int rep=i+1;
            int counter=0;
                for(int j=n;j>rep;j--)
                {
                    cout<<j<<" ";
                    counter++;
                }
                int left=(2*n-1)-2*counter;
            
                for(int j=0;j<left;j++)
                    cout<<rep<<" ";
                for(int j=rep+1;j<=n;j++)
                    cout<<j<<" ";
                cout<<endl;
        }
    }
    
    
    
    return 0;
}
