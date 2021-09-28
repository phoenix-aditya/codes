using namespace std;
#include <bits/stdc++.h>

void towerofhanoi(int n, char start, char end, char auxie)
{
    if(n==1)
    {cout<<"disk 1 moved from "<<start<<" to "<<end<<"\n";
        return;
    }
    
    else
    {
        towerofhanoi(n-1, start, auxie, end);
        cout<<"disk "<<n<<" moved from "<<start<<" to "<<end<<endl;
        towerofhanoi(n-1, auxie, end, start);
    }
}
int main()
{
    towerofhanoi(4, 'A', 'C', 'B');
    
    
    return 0;
}
