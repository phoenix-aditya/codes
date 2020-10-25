#include <iostream>
using namespace std;

/*
 printing pattern:
 for n=5
        1
       232
      34543
     4567654
    567898765
 */
int main()
{
    int n;
    cin>>n;
    int z=n;
    while(z--)
    {
        for(int i=z;i>0;i--)
        {
            cout<<" ";
        }
        for(int i=n-z;i<=2*(n-z)-1;i++)
            cout<<i;
        for(int i=2*(n-z)-2;i>=n-z;i--)
            cout<<i;
        cout<<endl;
    }
    return 0;
}

