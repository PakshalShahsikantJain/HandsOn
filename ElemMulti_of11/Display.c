/*
    Author : Pakshal Shashikant Jain 
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////

//Function to Display Elements Which are Multiple of 11
void Display(int arr[],int isize)
{
    int i = 0;

    //Logic 
    printf("Elements Which are Multiple of 11 are : \n");
    for(i = 0;i < isize;i++)
    {
        if((arr[i] % 11) == 0)
        {
            printf("%d\t",arr[i]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int i = 0;
    int isize = 0;
    int *arr = NULL;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter number of Elements You Want in array \n");
    scanf("%d",&isize);

    //allocating Memory To array using malloc function
    arr = (int *)malloc(isize * sizeof(int *));

    //Inserting Memory in array
    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d : \n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Display Function
    Display(arr,isize);

    //Deallocating memory of array
    free(arr);

    return 0;
}