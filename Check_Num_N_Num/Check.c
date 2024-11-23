/*
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//Defining 1 AS TRUE 
#define TRUE 1

//Deining 0 AS FALSE
#define FALSE 0

//Converting Data type int To BOOL
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Number is Present or Not in Entered N Numbers
BOOL Check(int isize,int arr[],int NO)
{
    int i = 0;

    //Logic To Check
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == NO)
        {
            break;
        }
    }
    
    //Handeling Conditions 
    if(arr[i] == NO)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int i = 0;
    int isize = 0;
    int *arr = NULL;
    int NO = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");

    //Taking input From User
    printf("Enter number of Elements You Want in array : \n");
    scanf("%d",&isize);

    //Allocating Memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    //Inserting Elements in array
    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Taking another number from user
    printf("Enter Any Number To Check if It is Present or Not in Entered N Numbers \n");
    scanf("%d",&NO);

    //Call To Check Function
    bret = Check(isize,arr,NO);

    //Handeling Conition if return value is TRUE
    if(bret == TRUE)
    {
        printf("Entered Number is Present in Entered N Numbers \n");
    }
    //Handeling Condition if return Value is FALSE
    else
    {
        printf("Entered Number is Not Present in Entered N Numbers \n");
    }

    //Deallocating Memory of Array Created
    free(arr);

    return 0;
}