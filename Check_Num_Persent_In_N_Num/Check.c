/*
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

//Converting Type int to Boolean
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check 11 is Present or Not in Entered N Number
BOOL Check(int arr[],int isize)
{
    int i = 0;

    //Logic 
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == 11)
        {
            break;
        }
    }

    if(arr[i] == 11)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;
    BOOL bret = false;

    printf("Ganapati Bappa Morya....\n");

    //Take input From User
    printf("Enter Number of Elements You Want in array...\n");
    scanf("%d",&isize);

    //Allocating Memory To Array
    arr = (int *)malloc(isize * sizeof(int));

    //Inserting Elements in array
    printf("Enter Elements in array...\n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d \n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Bret Function
    bret = Check(arr,isize);

    //Handeling Condition if return value is True
    if(bret == true)
    {
        printf("11 is Present in Entered N Numbers");
    }
    //Handeling Condition if return Value is False
    else
    {
        printf("11 is Not Present in Entered N Numbers");
    }

    return 0;
}