/*
    Author : Pakshal Shashikant Jain 
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Frequency of 11 Number in Entered N Number
int Frequency(int arr[],int isize)
{
    int i = 0;  
    int icnt = 0;

    //Logic
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == 11)
        {
            icnt = icnt + 1;
        }
    }
    
    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int isize = 0;
    int i = 0;
    int *arr = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    //Taking Input from user
    printf("Enter Number of Elements You Want in array \n");    
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

    //Call To Frequency Function
    iret = Frequency(arr,isize);

    //Printing Frequency Calcualated
    printf("Frequecny of 11 Number is : %d",iret);

    return 0;
}