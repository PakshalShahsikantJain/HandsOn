/*
    Author : Pakshal Shashikant Jain 
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Frequecy of Even Elements From N Numbers
int Count(int arr[],int isize)
{
    int i = 0;
    int icnt = 0;

    //Logic To Find Frequency 
    for(i = 0; i < isize;i++)
    {
        if((arr[i] % 2) == 0)
        {
            //icnt++;
            icnt = icnt + 1;
        }       
    }

    //Returning Cont Calculated
    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int isize = 0;
    int i = 0;
    int *arr = NULL;
    int iret = 0;

    printf("Jay Ganesh........\n");

    //Taking Input from user
    printf("Enter Number of Elements You Want in Array \n");
    scanf("%d",&isize);

    //Handeling Condition if Entered Input is Less than 0
    if(isize < 0)
    {
        isize = -isize;
    }

    arr = (int *)malloc(isize * sizeof(int *));

    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d \n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call TO Count Function
    iret = Count(arr,isize);

    //Printing Frequency Calculated
    printf("Frequency of Even Elements is : %d",iret);

    return 0;
}