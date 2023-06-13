/*
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 5.
              
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 85 80 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Numbers Which Are Divisible By 5
void Display(int arr[],int isize)
{
    int i = 0;

    //Logic To Display Numbers
    printf("Elements Which Are Divisible By 5 Are : \n");
    for(i = 0;i < isize;i++)
    {
        if(arr[i] % 5 == 0)
        {
            printf("%d\t",arr[i]);
        }    
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Elements You Want in Array\n");
    scanf("%d",&isize);

    //Handeling Condition if enteres isize is negative
    if(isize < 0)
    {
        isize = -isize;
    }

    //Allocating Memory to array
    arr = (int *)malloc(isize * sizeof(int));

    //Handeling Condtion if Memory is Not Allocated Properly 
    if(arr == NULL)
    {
        printf("Unable To Allocate Memory..");
        return -1;
    }

    //Inserting Elements in array 
    printf("Enter Elements in Array..\n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Display Function
    Display(arr,isize);

    return 0;
}