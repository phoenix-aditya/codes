#include<bits/stdc++.h>
#define ll long long
using namespace std;


//aditya ranaut- phoenix_aditya

void solve()
{
    string s;
    string s1="KICK";
    string s2="START";
    vector<int> vec;
    
    cin>>s;
    
//    cout<<s<<endl;
    int kickcount=0;
    int startcount=0;
    char k='K';
    char SS='S';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==k)
        {
//            cout<<s.substr(i,4)<<endl;
            if(s.substr(i,4)==s1)
            {
                vec.push_back(1);kickcount++;
//                cout<<i<<" ";
//                cout<<s.substr(i,4)<<endl;
            }
            
        }
        if(s[i]==SS)
        {
            if(s.substr(i,5)==s2)
            {
                vec.push_back(0);startcount++;
//                cout<<i<<" ";
//                cout<<s.substr(i,5)<<endl;
            }
        }
    }
    ll ans=0;
    for(auto i:vec)
    {
//        cout<<i;
        if(i==0)
            startcount--;
        else
        {
            ans+=startcount;
        }
        
    }
    cout<<ans<<endl;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {cout<<"Case #"<<i<<": ";
        solve();
    }
    
    return 0;
}
