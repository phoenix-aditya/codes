using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main()
{
    int t;
    cin>>t;
    int arr[13];
    
    for(int i=1;i<=12;i++)
    {
        arr[i]=pow(2,i-1);
    }
    
    while(t--)
    {
        int p;
        cin>>p;
        int menu=0;
        for(int i=12;i>=1;i--)
        {
            if(p>=arr[i])
            {
                while(p>=arr[i])
                {p=p-arr[i];
                    menu++;}
            }
        }
        
        cout<<menu<<"\n";
        
        
        
    }
    
    return 0;
}
