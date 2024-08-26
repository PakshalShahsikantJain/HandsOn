/*
    Author : Pakshal Shashikant Jain
    Date : 26/08/2024
    Program : Write a program which accept matrix from user and return addition of Border
              elements.
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to add Border Elements of Matrix
int AddBorder(int **arr,int iRow,int iCol) 
{
    int i = 0;
    int j = 0;
    int isum = 0;

    //Adding Border Elements of matrix
    for(i = 0;i < iRow;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            if((i == 0)||(j == 0)||(i == (iRow - 1))||(j == (iCol - 1)))
            {
                // printf("%d\t",arr[i][j]);
                isum = isum + arr[i][j];
            }
        }
        //printf("\n");
    }

    return isum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int i = 0;
    int j = 0;
    int row = 0;
    int col = 0;
    int iret = 0;

    int **arr = NULL;   

    printf("Jay Ganesh....\n");

    //Taking input from user
    printf("Enter Number of Rows : ");
    scanf("%d",&row);

    printf("Enter Number of Columns : ");
    scanf("%d",&col);

    //allocating memory for matrix
    arr = (int **)malloc(row * sizeof(int *));

    for(i = 0;i < row;i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    //Taking elements of matarix as input from user
    printf("Enter Elements of Matrix : \n");
    for(i = 0;i < row;i++)
    {
        printf("---Enter Elements into %d Row---\n",(i + 1));
        for(j = 0;j < col;j++)
        {
            printf("Enter Element No %d : ",(j + 1));
            scanf("%d",&arr[i][j]);
        }
    }

    //Printing Elements of Matrix
    printf("Elements of Matrix are : \n");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }

    //Call To AddBorder Function
    iret = AddBorder(arr,row,col);

    //Printing Addition of Border Elements of Matrix
    printf("Addition of Border Elements is : %d \n",iret);

    //Deallocating memory of pointer
    free(arr);

    return 0;
}