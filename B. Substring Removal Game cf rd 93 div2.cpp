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
const int mxn=101;
bool deleted[mxn];

void solve()
{
    string s;
    cin>>s;
    
    vector<int> noofcov1;
    
    int counter=0;
    for(char x:s)
    {
        if(x=='1')
            counter+=1;
        else
        {
            noofcov1.push_back(counter);
            counter=0;
        }
    }
    noofcov1.push_back(counter);
    
    sort(noofcov1.rbegin(),noofcov1.rend());
    
    int scorealice=0;
    int i=0;
    for(auto x:noofcov1)
    {
        if(i%2==0)
            scorealice+=x;
        i++;
    }
    
    cout<<scorealice<<endl;
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}
