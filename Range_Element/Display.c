/*
    Author : Pakshal Shashikant Jain 
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output : 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//Function To Display Such Elements Which are in Entered Range 
int* Display(int isize,int arr[],int start,int end)
{
    int i = 0;
    static int brr[100];

    for(i = 0;i < isize;i++)
    {
        if((arr[i] >= start)&&(arr[i] <= end))
        {
            brr[i] = arr[i];
        }
    }

    return brr;
}

//Main function
int main()
{
    int isize = 0;
    int start = 0;
    int end = 0;
    int *arr = NULL;
    int i = 0;
    int *iret = NULL;

    printf("Jay Ganesh...\n");

    //Taking input from user
    printf("Enter Number of Elements You Want in array \n");
    scanf("%d",&isize); 

    //Allocating Memory To Array 
    arr = (int *)malloc(isize * sizeof(int));

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }
    
    //Taking Starting Number of Range from user
    printf("Enter Starting Number : \n");
    scanf("%d",&start);

    //Taking Ending Number of Range from user
    printf("Enter Ending Number : \n");
    scanf("%d",&end);

    //Call To Display Function
    iret = Display(isize,arr,start,end);

    //Printing Elements Which are Present in Entered Range
    printf("Printing Elements Which are Present in Between Range of %d and %d Numbers : \n",start,end);
    for(i = 0;i < isize;i++)
    {
        if(iret[i] != 0)
        {
            printf("%d\t",iret[i]);
        }
    }

    //Deallocating Memory of array created
    free(arr);
    free(iret);

    return 0;
}