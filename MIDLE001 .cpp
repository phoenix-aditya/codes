#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut - phoenix_aditya

int main()
{
    string s,s2="";
    cin>>s;
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    map<char, int> freq;
    
    for(char c:s)
    {
        if(!freq[c])
            freq[c]=1;
        else
            freq[c]++;
    }
    
    set<char> checker;
    
    for(char c:s)
    {
        if(checker.count(c))
            continue;
        else
        {cout<<c<<" "<<freq[c]<<" ";checker.insert(c);s2.push_back(c);}
    }
    cout<<endl;
//    here
//    cout<<s2<<endl;
//    end
    vector<char> temp;
    vector<char> temp2;

    for(int i=0;i<n;i++)
    {
        temp.clear();
        temp2.clear();
        int y=arr[i];
        checker.clear();
        
        vector<int> whereisy;
        whereisy.clear();
        
        for(int i=0;i<s2.length();i++)
        {
            if(freq[s2[i]]==y)
                whereisy.push_back(i);
        }
        sort(whereisy.begin(), whereisy.end());
        
        int start=whereisy[0];
        int end=whereisy[whereisy.size()-1];
        
        for(int i=0;i<s2.length();i++)
        {
            if(checker.count(s2[i]))
                continue;
            if(i>=start && i<=end && freq[s2[i]]!=y)
            {temp2.push_back(s2[i]);checker.insert(s2[i]);}
            else
            {temp.push_back(s2[i]);checker.insert(s2[i]);}
        }
        for(auto x:temp2)
        {
            if(freq[x]>y)
            {temp.push_back(x);checker.insert(x);}
            else
            {temp.insert(temp.begin(), x);checker.insert(x);}
        }
        
        for(auto x:temp)
        {
            cout<<x<<" "<<freq[x]<<" ";
        }
        cout<<endl;
        s2="";
        for(auto x:temp)
            s2+=x;
    }
    return 0;
}
/*
 nomatterhowbusyyoumaythinkyouareyoumustfindtimeforreadingorsurrenderyourselftoselfchosenignorance
 3
 3 1 6
 */
