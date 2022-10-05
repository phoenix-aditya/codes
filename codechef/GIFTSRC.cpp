using namespace std;
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

void left(point &p)
{
    p.x=p.x-1;
    
}
void right(point &p)
{
    p.x=p.x+1;
}
void up(point &p)
{
    p.y=p.y+1;
}
void down(point &p)
{
    p.y=p.y-1;
}
  
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        point p;
        p.x=0;p.y=0;
        int n;
        cin>>n;
        
        char s='0',z;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            
             if((s=='L' || s=='R') && (z=='L' || z=='R'))
            continue;
             else if((s=='U' || s=='D') &&( z=='U' || z=='D'))
            continue;
            else
            s=z;
                
        
        if(s=='L')
            left(p);
        else if(s=='R')
            right(p);
        else if(s=='U')
            up(p);
        else if(s=='D')
            down(p);
            
        }
        
        cout<<p.x<<" "<<p.y<<"\n";
        
    }
    return 0;
}
