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
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
 
 */
int main()
{
    int n;
    cin>>n;
    
    vector<int> left;
    
    for(int i=1;i<=pow(n,2);i++)
    {
        if(i%n==0)
        {
            cout<<i<<" ";
            if(i==pow(n,2))
            {cout<<endl;break;}
            left.push_back(i+1);
            i+=(n+1);
            cout<<endl;
        }
        if(i>pow(n,2))
            break;
        cout<<i<<" ";
    }
    reverse(left.begin(), left.end());
    for(auto x:left)
    {
        int start=x;
        for(int i=start;i<start+n;i++)
            cout<<i<<" ";
        cout<<endl;
    }
    
    
    return 0;
}
