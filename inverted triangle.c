#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2*i;j++)
            printf(" ");
        for(int z=0;z<2*(5-i)-1;z++)
            printf("%s ","*");

        printf("\n");
    }
    
    return 0;
}


