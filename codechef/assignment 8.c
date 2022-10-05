#include<stdio.h>
int display(int*);
int maximum(int[],int,int);
int minimum(int[],int, int);
int count(int*);
void insert(int*, int);
void delet(int*,int);
float findmean(int[], int);

int num, avg, ind=0;

int main()
{
   int num, max, min;
    scanf("%d",&num);
    
    int student_array[num+10];
    
    printf("enter marks of %d students: ",num);
    for(int i=0;i<num;i++)
        scanf("%d",&student_array[i]);
    
    int n=sizeof(student_array)/sizeof(student_array[0]);
    
    avg=display(student_array);
    printf("the total marks is: %f \n",findmean(student_array,n));
    printf("\n the average is: %f \n",findmean(student_array,n)/num);
    
    max= maximum(student_array,0,num);
    min=minimum(student_array,0,num);
    printf("highest marks: %d \n minimum marks: %d \n",max,min);
    //odd even
    int odd[num], even[num], oddeven[num];
    int oin=0, ein=0,oein=0;
    
    for(int i=0;i<num;i++)
    {
        if(student_array[i]%2==0)
        {even[ein]=student_array[i];
            ein++;
        }
        else
        {odd[oin]=student_array[i];
            oin++;
        }
    }
    for(int i=0;i<oin;i++)
    {
        oddeven[i]=odd[i];
        oein++;
    }
    for(int i=0;i<num;i++)
    {oddeven[i+oein]=even[i];}
   //inserting
    int pos;
    printf("\n enter position: ");
    scanf("%d",&pos);
    
    insert(student_array, pos);
    //deleting
    int marks;
    printf("\n enter mark to delete:  ");
    scanf("%d", &marks);
    
    delet(student_array, marks);
    //sorting
    for(int i=num-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(student_array[j]>student_array[j+1]){
                int temp=student_array[j];
                student_array[j]=student_array[j+1];
                student_array[j+1]=temp;
            }
        }
    }
    int high;
    printf(" \n enter the nth highest marks you want 1 for highest: ");
    scanf("%d", &high);
    printf("%d",student_array[num-high+1]);
    
    //searching
    
    int msearch, flag=0;
    printf("\n enter the  marks you want to find: ");
    scanf("%d", &msearch);
    for(int i=0;i<num;i++)
    {
        if(student_array[i]==msearch)
        {printf("\n found at the index of marks is %d \n", i);
            flag=1;}
        
    }
    if(flag==0)
        printf("\n not found");
    
    return 0;
}
int counter=0;
int display(int *n)
{
    if(counter==num)
        return *n;
    
    printf(" %d ",*n);
    n++;
    counter++;
    return *n+display(n);
    
}

int maximum(int array[], int index, int len)
{
    int max;
    
    
    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    
    
    
    max = maximum(array, index + 1, len);
    
    
    if(array[index] > max)
        return array[index];
    else
        return max;
}
int minimum(int array[], int index, int len)
{
    int min;
    
    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    
    min = minimum(array, index + 1, len);
    
    if(array[index] < min)
        return array[index];
    else
        return min;
}
int cbavg=0, z=0;
int count(int *n)
{
    if(z==num-1)
        return cbavg;
    
    if(*n<avg)
        cbavg++;
    z=z+1;
    
    return count(n+1);
}
        
    
void insert(int *n, int pos)
{
    
    printf("\n enter marks to be eneterd: ");
    scanf("%d", n+pos-1);
}

void delet(int *n,int marks)
{
    for(int i=0;i<num;i++)
    {
        if(*(n+i)==marks)
            *(n+i)=-1;
    }
}

// Function Definiton of findMean function
float findmean(int A[], int N)
{
    if (N == 1)
        return (float)A[N-1];
    else
        return ((float)(findmean(A, N-1)*(N-1) +
                        A[N-1]) / N);
}
