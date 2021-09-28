using namespace std;
#include<iostream>



int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m, n;
        cin>>n>>m;
        int f[n], p[n];
        
        for(int i=0;i<n;i++)
            cin>>f[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
        
        int tp[m];
        for(int i=0;i<m;i++)
            tp[i]=0;
        
        for(int i=0;i<n;i++)
        {
            tp[f[i]-1]=tp[f[i]-1]+p[i];
        }
            
        for(int i=0;i<m;i++)
            cout<<tp[i]<<" ";
        cout<<endl;
        
        int min1=60000000;
        
        for(int i=0;i<m;i++)
        {
            int test=-1;
            
            for(int j=0;j<n;j++)
                if(f[j]==i+1)
                    test=1;
            
            if(test==1 && tp[i]<min1)
                min1=tp[i];
            
        }
        
        cout<<min1<<endl;
    }
    
    return 0;
}
