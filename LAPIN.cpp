#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str, str1, str2;
    long long mid;
    while(t--)
    {
        cin>>str;
        if(str.size()%2==0)
        {mid=(str.size())/2;
        str1=str.substr(0,mid);
        str2=str.substr(mid);
            sort(str1.begin(),str1.end());
            sort(str2.begin(),str2.end());
            
            if(str1==str2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            mid=(str.size())/2;
            str1=str.substr(0,mid);
            str2=str.substr(mid+1);
            cout<<str1<<" "<<str2;
            sort(str1.begin(),str1.end());
            sort(str2.begin(),str2.end());
            
            if(str1==str2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    
    return 0;
}
