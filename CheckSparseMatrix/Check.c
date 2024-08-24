#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckSparse(int **arr,int irow,int icol) 
{
    int i = 0;
    int j = 0;
    int icnt = 0;
    int icnt2 = 0;

    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            if(arr[i][j] == 0)
            {
                icnt++;
            }
            else 
            {
                icnt2++;
            }
        }
    }

    if(icnt > icnt2)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    int i = 0;
    int j = 0;
    BOOL bret = FALSE;


    printf("Jay Ganesh.....\n");

    printf("Enter number of rows : \n");
    scanf("%d",&irow);

    printf("Enter number of cols : \n");
    scanf("%d",&icol);

    arr = (int**)malloc(irow * sizeof(int*));
    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol * sizeof(int));
    }

    printf("Enter elements in matrix : \n");
    for(i = 0;i < irow;i++)
    {
        printf("---Enter element in %d row---\n",(i + 1));
        for(j = 0;j < icol;j++)
        {
            printf("Enter element no %d : ",(j + 1));
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Elements of matrix are : \n");
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    bret = CheckSparse(arr,irow,icol);
    if(bret == TRUE)
    {
        printf("Entered matrix is sparse matrix\n");
    }
    else 
    {
        printf("Entered matrix is not a sparse matrix\n");
    }
    
    for(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }
    
    free(arr);
    
    return 0;
}