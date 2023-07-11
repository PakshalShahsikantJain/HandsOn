/*
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//Function To Find FirstOccurance of Entered Number 
int FirstOccurance(int isize,int arr[],int NO)
{
    int i = 0;

    //Logic To Find
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == NO)
        {
            break;
        }
    }

    if(arr[i] == NO)
    {
        return i;
    }
    else 
    {
        return -1;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;
    int iret = 0;
    int NO = 0;

    printf("Jay ganesh....\n");

    //Taking input from user
    printf("Enter number of Elements You Want in array : \n");
    scanf("%d",&isize);

    //Allocating memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    //Inerting Elements in array
    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d \n",i + 1);
        scanf("%d",&arr[i]);
    } 

    //Enter Number To Find First Occurance in entered N Numbers 
    printf("Enter Number To Find First Occurance of Entered Number \n");
    scanf("%d",&NO);

    //Call To FirstOccurance Function
    iret = FirstOccurance(isize,arr,NO);

    //Print First occurance of Entered number in Entered N Numbers
    printf("First Occurance of Entered Number is at index Number : %d",iret);

    return 0;
}