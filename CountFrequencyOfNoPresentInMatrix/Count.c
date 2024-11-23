/*
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to count frequecny of entered number from matrix
int CountNo(int **arr,int irow,int icol,int ino) 
{
    int i = 0;
    int j = 0;
    int icnt = 0;

    //Filter
    if(ino < 0)
    {
        ino = -ino;
    }

    //Logic to count frequency
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j< icol;j++)
        {
            if(arr[i][j] == ino)
            {
                icnt++;
            }
        }
    }
    
    //returning frequecy of nop
    return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    int ino = 0;
    int iret = 0;
    int i = 0;
    int j = 0;

    printf("Jay Ganesh....\n");

    //Taking input from user
    printf("Enter Number of Rows : ");
    scanf("%d",&irow);

    printf("Enter Number of Cols : ");
    scanf("%d",&icol);

    //Allocating memory to matrix 
    arr = (int **)malloc(irow * sizeof(int *));

    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol * sizeof(int));
    }

    //Inserting elements in matrix 
    printf("Enter elements in matrix : \n");
    for(i = 0;i < irow;i++)
    {
        printf("Enter elements of %d row : \n",(i + 1));
        for(j = 0;j< icol;j++)
        {
            //Taking input from user
            printf("Enter element no %d : ",(j + 1));
            scanf("%d",&arr[i][j]);
        }
    }

    //Taking input from user
    printf("Enter one number to count frequecy of : ");
    scanf("%d",&ino);

    //Printing Elements of matrix 
    printf("Elements of matrix are : \n");
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Call to countNo function
    iret = CountNo(arr,irow,icol,ino);

    //Printing frequency of entered no
    printf("Frequecny of entered No %d is : %d",ino,iret);
    
    return 0;
}