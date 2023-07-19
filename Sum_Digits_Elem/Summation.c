/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21 
*/

//Required Libraires
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Digits of Each Number
void Summation(int isize,int arr[])
{
    int i = 0;
    int Digits = 0;
    int sum = 0;
    int No = 0;

    //Logic To Calculate
    printf("Summation of Digits of Each Number is as Follows \n");
    for(i = 0;i < isize;i++)
    {
        No = arr[i];

        while(No != 0)
        {
            Digits = No % 10;
            sum = sum + Digits;
            No = No / 10;
        }

        printf("%d\t",sum);
        sum = 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int i = 0;

    printf("Jay Ganesh......\n");

    //Taking input from user
    printf("Enter Number of Elements You Want in array \n");
    scanf("%d",&isize);

    //Allocating Memory To array
    arr = (int *)malloc(isize * sizeof(int));
    
    if(arr == NULL)
    {
        printf("Unable To Allocate Memory \n");
        
        return -1;
    }

    //Inserting elements in array
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //Call To Summation function
    Summation(isize,arr);

    //Deallcating Memory of array
    free(arr);

    return 0;
}