/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
*/

//Required Libraires
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Differnec Between Max and Minimum Element
int Difference(int isize,int arr[])
{
    int i = 0;
    int imax = 0;
    int imin = 0;
    int diff = 0;

    //Logic To Find Difference 
    imax = arr[0];
    imin = arr[0];
    for(i = 0;i < isize;i++)
    {
        if(arr[i] > imax)
        {
            imax = arr[i];
        }
        else if(arr[i] < imin)
        {
            imin = arr[i];
        }
    }

    diff = imax - imin;

    return diff;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter Number of Elements You Want in array \n");
    scanf("%d",&isize);

    if(isize < 0)
    {
        isize = -isize;
    }

    //Allocating Memory To Array 
    arr = (int *)malloc(isize * sizeof(int));

    //Handeling Conditions if Memory To array Not allocated Properly
    if(arr == NULL)
    {
        printf("Unable To Allocate Memory \n");
        
        return -1;
    }

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Difference Function
    iret = Difference(isize,arr);

    //Printing Difference Between Max and Minimum Element Found
    printf("Difference Between Max and Minimum Elements is : %d",iret);

    //Deallocating Memory of Array 
    free(arr);

    return 0;
}