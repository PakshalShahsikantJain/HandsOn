/*
    Author : Pakshal Shashikant Jain 
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Elements which are even and Divisble by 5
void Display(int arr[],int isize)
{
    int i = 0;

    printf("Printing Elements Which are Even and Divisible by 5 : \n");
    for(i = 0;i < isize;i++)
    {
        if(((arr[i] % 2) == 0)&&((arr[i] % 5) == 0))
        {
            printf("%d\t",arr[i]);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int isize = 0;
    int i = 0;
    int *arr = NULL;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want....\n");
    scanf("%d",&isize);

    //Allocating Memory To Array
    arr = (int *)malloc(isize * sizeof(int));

    printf("Enter Elements in Array...\n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d\n",i + 1);
        scanf("%d",&arr[i]);
    }
    
    //Call To Display Function
    Display(arr,isize);

    //Dellocating Memory of array 
    free(arr);

    return 0;
}