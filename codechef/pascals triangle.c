#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5-i;j>0;j--)
            printf(" ");
        for(int z=0;z<i+1;z++)
            printf("%d ",(fact(i)/(fact(i-z)*fact(z))));
        printf("\n");
    }
    return 0;
}

int fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else
    return 1;
    
}
