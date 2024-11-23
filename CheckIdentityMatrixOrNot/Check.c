/*
    Author : Pakshal Shashikant Jain 
    Date : 07/08/2024
    Program : Write a program which accept matrix and check whether the matrix is
              identity matrix or not.

              Identity matrix is a square matrix with 1’s along the diagonal from upper left to
              lower right and 0’s in all other positions.
              If it satisfies the structure as explained before then the matrix is called as
              identity matrix. 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//Giving new name BOOL to int DataType
typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Matrix is Identity matrix or not 
BOOL ChkIdentity(int **arr,int irow,int icol) 
{
    int i = 0;
    int j = 0;
    BOOL bret = TRUE;

    //Logic to check
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            if(i == j)
            {
                if(arr[i][j] != 1)
                {
                    bret = FALSE;
                }
            }
            else 
            {
                if(arr[i][j] != 0)
                {
                    bret = FALSE;
                }
            }
        }
    }

    return bret;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    BOOL bret = FALSE;
    int irow = 0;
    int icol = 0;
    int i = 0;
    int j = 0;
    int **arr = NULL;

    printf("Jay Ganesh....\n");

    //Taking input from user 
    printf("Enter number of rows : ");
    scanf("%d",&irow);

    printf("Enter number of columns : ");
    scanf("%d",&icol);

    //Allocating memory to matrix
    arr = (int **)malloc(irow * sizeof(int*));

    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol * sizeof(int));
    }

    //Inserting elements into the matrix
    printf("Insert elements in matrix : \n");
    for(i = 0;i < irow;i++)
    {
        printf("---Enter elements of %d row : ---\n",i + 1);
        for(j = 0;j < icol;j++)
        {
            printf("Enter element no %d : ",(j + 1));
            scanf("%d",&arr[i][j]);
        }
    }

    //Displaying matrix
    printf("Element of Matrix are : \n");
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Call to ChkIndentity function
    bret = ChkIdentity(arr,irow,icol);

    if(bret == TRUE)
    {   
        printf("Entered Matrix is Identity matrix\n");
    }
    else 
    {
        printf("Entered Matrix is not a Identity matrix\n");
    }

    //Deallocating memory of matrix 
    for(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}