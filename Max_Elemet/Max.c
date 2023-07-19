/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Maximum Element From Entered N Numbers
int Maximum(int isize,int arr[])
{
    int i = 0;
    int max = 0;

    //Handeling Condition if isize is less than 0
    if(isize < 0)
    {
        isize = -isize;
    }

    //Logic
    max = arr[0];
    for(i = 0;i < isize;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int isize = 0;
    int i = 0;
    int *arr = NULL;
    int iret = 0;

    printf("Ganapati Bappa Morya...\n");

    //Taking Input from user
    printf("Enter Number of Elements You Want in array \n");
    scanf("%d",&isize);

    //Allocating Memory to array
    arr = (int *)malloc(isize * sizeof(int));

    //Handeling Conditions
    if(arr == NULL)
    {
        printf("Unable To allocate Memory");

        return -1;
    }

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Maximum Function
    iret = Maximum(isize,arr);

    //Printing Maximum Number Found from Entered N Numbers
    printf("Maxmium Number From Entered N Number is : %d",iret);

    //Deallocating Memory of Array 
    free(arr);

    return 0;   
}