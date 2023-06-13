/*
    Author : Pakshal Shashikant Jain 
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181) 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Differnce Between Even and odd Elements From N Numbers Entered
int Difference(int arr[],int isize)
{
    int i = 0;
    int diff = 0;
    int SumEven = 0;
    int SumOdd = 0;

    //Logic To Calculate Difference
    for(i = 0;i < isize;i++)
    {
        if((arr[i] % 2) == 0)
        {
            SumEven = SumEven + arr[i];
        }
        else
        {
            SumOdd = SumOdd + arr[i];
        }
    }

    //Calculating Difference
    diff = SumEven - SumOdd;

    return diff;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int isize = 0;
    int i = 0;
    int *arr = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number of Elements You Want in Array\n");
    scanf("%d",&isize);

    //Allocating Memory array
    arr = (int *)malloc(isize * sizeof(int));

    if(arr == NULL)
    {
        printf("Unable To Allocate Memory..\n");
        return -1;
    }

    printf("Enter Elements in Array\n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Difference Function
    iret = Difference(arr,isize);

    printf("Difference Between Even and odd Elements is : %d",iret);

    //Deallocating Memory of Array 
    free(arr);

    return 0;
}