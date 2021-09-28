#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int first=0, second,sum=0;
        for(int i=0;i<q*2;i++)
        {
            cin>>second;
            sum=sum+abs(second-first);
            first=second;
        }
        
        cout<<sum<<"\n";
   
    }
    return 0;
}
