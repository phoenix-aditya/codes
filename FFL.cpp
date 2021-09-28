#include <iostream>
using namespace std;
struct play
{
    int c;
    int type;
    
};
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        play arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i].c;
        for(int i=0;i<n;i++)
        cin>>arr[i].type;
        
        int playerpos1=1000, playerpos2=1000,price=100-s;
        for(int i=0;i<n;i++)
        {
            if(arr[i].type==1)
            {
                if(arr[i].c<playerpos1)
                playerpos1=arr[i].c;
            }
            else if(arr[i].type==0)
            {
                if(arr[i].c<playerpos2)
                playerpos2=arr[i].c;
            }
      
        }
        if(playerpos1+playerpos2<=price)
        cout<<"yes"<<"\n";
        else if(playerpos1+playerpos2>price)
        cout<<"no"<<"\n";
        
        
    }
    return 0;
}
