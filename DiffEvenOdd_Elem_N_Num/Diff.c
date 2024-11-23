/*
    Author : Pakshal Shashikant Jain 
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference 
int Difference(int arr[],int isize)
{
    int icntEven = 0;
    int icntOdd = 0;
    int Diff = 0;
    int i = 0;

    //Logic To Calculate Difference
    for(i = 0;i < isize;i++)
    {
        if((arr[i] % 2) == 0)
        {
            icntEven = icntEven + 1; 
        }
        else 
        {
            icntOdd = icntOdd + 1;
        }
    }

    Diff = icntEven - icntOdd;

    return Diff;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int isize = 0;
    int *arr = NULL;
    int iret = 0;
    int i = 0;

    printf("Ganapati Bappa Morya...\n");
    
    //Taking Input From User
    printf("Enter Number of Elements You Want in array : \n");
    scanf("%d",&isize);

    //Handeling Condition if isize Entered is Less Than Zero
    if(isize < 0) 
    {
        isize = -isize;
    }

    //Allocating Memory to array 
    arr = (int *)malloc(isize * sizeof(int *));

    //Inserting Elements in array 
    for(i = 0;i < isize;i++)
    {
        printf("Enter Elements In array : %d \n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Difference Function
    iret = Difference(arr,isize);

    //Printing Difference Calculated    
    printf("Difference Between Frequency of Even and Odd Elements is : %d",iret);

    return 0;
}