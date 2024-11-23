/*
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Last Occurance
int Find(int isize,int arr[],int NO)
{
    int i = 0;

    for(i = isize;i > 0;i--)
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int isize = 0;
    int NO = 0;
    int *arr = NULL;
    int iret = 0;
    int i = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter Number of Element You Want in array : \n");
    scanf("%d",&isize);

    //Allocating Memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    //Inserting Elements in array 
    printf("Enter Elements in array \n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter Element Number %d \n",i + 1);
        scanf("%d",&arr[i]);
    }       

    //Taking another number from user To find Last Occurance 
    printf("Enter Number You Want To Search Last Occurance of : \n");
    scanf("%d",&NO);

    //Call To Find Function
    iret = Find(isize,arr,NO);

    //Printing Last Occurance Found 
    printf("Last Occurance of %d Number is At index Number %d \n",NO,iret);

    //Deallocating Memory of array 
    free(arr);

    return 0;
}