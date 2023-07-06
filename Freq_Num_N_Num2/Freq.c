/*
    Author : Pakshal Shashikant Jain 
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function Calculate Frequency
int Calculate(int isize,int arr[],int NO)
{
    int icnt = 0;   
    int i = 0;
    
    //Logic
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == NO)
        {
            icnt = icnt + 1;
        }
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;
    int NO = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From user
    printf("Enter Number of Elements you want in array : \n");
    scanf("%d",&isize);

    //allcating Memory To Array
    arr = (int *)malloc(isize * sizeof(int));

    //Handeling Condition if Memory not allocated Properly
    if(arr == NULL)
    {
        printf("Unable To allocate Memory To Array\n");
        return -1;
    }

    //Inserting Elements in array 
    printf("Enter Elements in array : \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number : %d \n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Taking Number to Count Frequency of From User
    printf("Enter Any Number You Want To Count Frequency of From Entered N Numbers : \n");
    scanf("%d",&NO);

    //Call to Calculate Function
    iret = Calculate(isize,arr,NO);

    //Printing Frequency Calculated
    printf("Frequecy of %d Number in Enetered Number is : %d",NO,iret);

    free(arr);

    return 0;
}