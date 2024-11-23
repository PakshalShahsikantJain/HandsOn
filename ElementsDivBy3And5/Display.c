/*
    Author : Pakshal Shashikant Jain 
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display ELements Which are Divisible By 3 and 5
void Display(int arr[],int isize)
{
    int i = 0;

    //Logic 
    printf("Elements Divisible by 3 and 5  are : \n");
    for(i = 0;i < isize;i++)
    {
        if(((arr[i] % 3) == 0)&&((arr[i] % 5) == 0))
        {
            printf("%d",arr[i]);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Elements You Want in array\n");
    scanf("%d",&isize);

    //Allocating Memory To Array using malloc function
    arr = (int *)malloc(isize * sizeof(int));

    printf("Enter Elements in array \n");

    //Inserting Elements in array
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Display Function
    Display(arr,isize);

    //Deallocating Memory of array 
    free(arr);
    
    return 0;
}