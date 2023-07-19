/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraies
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display all Such Elements Which Contains 3 Digits in it 
void Display(int isize,int arr[])
{   
    int i = 0;
    int icnt = 0;
    int Digit = 0;
    int No = 0;

    //Logic To Display
    printf("Printing all Such Which Contains 3 Digits in It \n");
    for(i = 0;i < isize;i++)
    {
        No = arr[i];

        while(No != 0)
        {
            Digit = No % 10;
            icnt = icnt + 1;
            No = No / 10;
        }

        if(icnt == 3)
        {
            printf("%d\t",arr[i]);
        }
        icnt = 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter Number of Elements You want in array \n");
    scanf("%d",&isize);

    //Handeling Conditions if isize Less 0
    if(isize < 0)
    {
        isize = -isize;
    }

    //Allocating Memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    if(arr == NULL)
    {
        printf("Unable To Allocate memory\n");
    }

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }   

    //Call To Display function
    Display(isize,arr);

    //Deallocating Memory of Array Allocated
    free(arr);

    return 0;
}