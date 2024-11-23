/*
    Author : Pakshal Shashikant Jain 
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each row. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Reverse contents of each row of the given matrix
void ReverseRow(int **arr,int irow,int icol)
{
    int i = 0;
    int j = 0;

    //Logic to reverse each row of the matrix
    printf("Updated matrix is as follows : \n");
    for(i = 0;i < irow;i++)
    {
        for(j = icol - 1;j > -1;j--)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    int i = 0;
    int j = 0;

    printf("Jay Ganesh....\n");

    //Taking input from the user
    printf("Enter number of rows : ");
    scanf("%d",&irow);

    printf("Enter number of cols : ");
    scanf("%d",&icol);

    //Allocating memory for the matrix 
    arr = (int **)malloc(irow * sizeof(int *));

    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol *  sizeof(int));        
    }

    //Inserting elements into the matrix 
    printf("Enter elements in matrix : \n");
    for(i = 0;i < irow;i++)
    {
        printf("----Enter element in %d row : ----\n",i + 1);
        for(j = 0;j < icol;j++)
        {
            printf("Enter element no %d : ",j + 1);
            scanf("%d",&arr[i][j]);
        }
    }

    //Printing elements of the matrix 
    printf("Elements of matrix are : \n");
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Call to ReverseMatrix Function
    ReverseRow(arr,irow,icol);

    //Deallocating memory of matrix 
    for(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }

    free(arr);

   return 0;
}