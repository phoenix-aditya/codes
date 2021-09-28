#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    //this is not working maybe
{
    ll t;
    cin>>t;
    ll size;
    while(t--)
    {
        cin>>size;
        char arr[size];
        ll count1=0;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]=='1')
            count1++;
        }
        ll answer;
        answer=count1*(count1+1);
        cout<<answer/2<<"\n";
    }
    
    return 0;
}
