/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Minimum Number from Entered N Numbers
int Minimum(int isize,int arr[])
{
    int i = 0;
    int imin = 0;

    //Logic
    imin = arr[0];
    for(i = 0;i < isize;i++)
    {
        if(arr[i] < imin)
        {
            imin = arr[i];
        }
    }

    return imin;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;
    int iret = 0;

    //Taking Input from user
    printf("Enter Number of elements You Want in array \n");
    scanf("%d",&isize);

    //Handeling Conditions 
    if(isize < 0)
    {
        isize = -isize;
    }

    //Allocating Memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    //Handeling Conditions Memory Not Allocated Properly 
    if(arr == NULL)
    {
        printf("Unable To Allocate Memory \n");
    
        return -1;
    }

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }   

    //Call To Minimum function
    iret = Minimum(isize,arr);

    //Printing Minimum Number Found in Entered N Numbers
    printf("Minimum Number from Entered N Number is : %d",iret);

    free(arr);
    
    return 0;
}