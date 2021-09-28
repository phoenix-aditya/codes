#include <stdio.h>
#include<stdlib.h>
int fibonacci(int, int);
int term;

int main()
{
    int prno=0, no=1;
    int val;
    scanf("%d",&term);
    printf("0 1 ");
    val=fibonacci(prno, no);
    
    return 0;
    
}
int i=1;
int fibonacci(int prno, int no)
{
    int nxt;
    
    if(i==term)
        exit(0);
    else
    {nxt=prno+no;
       prno=no;
       no=nxt;
        i++;
       printf(" %d ",nxt);
        fibonacci(prno, no);
    }
    return 0;
}
