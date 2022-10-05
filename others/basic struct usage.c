
#include<stdio.h>
#include<stdlib.h>
struct markse
{
    int m1, m2;
    
};
struct student
{
    char name[50];
    int rollno;
    int marks;
    struct markse m;
    
};

int main()
{
    struct student arr[5];
    
    for(int i=0;i<5;i++)
    {
        printf("enter the name rollno , marks and marks1 and marks2 of the student:  \n");
        gets(arr[i].name);
        scanf("%d %d %d %d ", &arr[i].rollno, &arr[i].marks, &arr[i].m.m1, &arr[i].m.m2 );
    }
    for(int i=0;i<5;i++)
    {
        printf("the name rollno and marks of the student:  \n");
        puts(arr[i].name);
        printf("%d %d %d %d ", arr[i].rollno, arr[i].marks,arr[i].m.m1, arr[i].m.m2);
    }
    
    return 0;
}


