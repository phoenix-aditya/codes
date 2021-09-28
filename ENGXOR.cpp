using namespace std;
#include<iostream>

int countxor(int n)
{
    int count1=0;
    while(n)
    {
        if(n%2!=0)
            count1++;
        n/=2;
    }
    if(count1%2==0)
        return 0;
    else
        return 1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        int a[n], p[q];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<q;i++)
            cin>>p[i];
        
        int b[n];
        for(int j=0;j<q;j++)
        {
            int counteven=0, countodd=0;
            
            for(int i=0;i<n;i++)
            {b[i]=a[i]^p[j];}
            
            for(int i=0;i<n;i++)
            {
                if(countxor(b[i])==1)
                    countodd++;
                else if(countxor(b[i])==0)
                counteven++;
            }
            cout<<counteven<<" "<<countodd<<"\n";
        }
    }
    
    return 0;
}
