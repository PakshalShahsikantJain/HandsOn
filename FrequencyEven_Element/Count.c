#include<stdio.h>
#include<stdlib.h>

int Count(int arr[],int isize)
{
    int i = 0;

    for(i = 0; i < isize;i++)
    {
        
    }
}
int main() 
{
    int isize = 0;
    int i = 0;
    int *arr = NULL;

    printf("Jay Ganesh........\n");

    printf("Enter Number of Elements You Want in Array \n");
    scanf("%d",&isize);

    arr = (int *)malloc(isize * sizeof(int *));

    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d \n",i + 1);
        scanf("%d",&arr[i]);
    }

    return 0;
}