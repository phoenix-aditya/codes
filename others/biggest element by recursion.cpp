#include<stdio.h>
#include<stdlib.h>

int large(int [], int);


int main()
{
    int num, val;
    
    
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
        scanf("%d",&arr[i]);
    
    val=large(arr,num);
    printf("largest = %d ",val);
    
    return 0;
}
int i=0, larger=-10000;
int large(int arr[], int n)
{
    if(i<n)
    {
        if(larger<arr[i])
            larger=arr[i];
        i++;
        large(arr, n);
        
    }
    return larger;
}
