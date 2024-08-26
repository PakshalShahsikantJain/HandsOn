#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int TraceOfMatrix(int **arr,int irow,int icol) 
{
    int i = 0;
    int j = 0;
    int isum = 0;

    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            if(i == j)
            {
                isum = isum + arr[i][j];
            }
        }
    }

    return isum;
}

int NormalOfMatrix(int **arr,int irow,int icol) 
{
    int i = 0;
    int j = 0;
    int k = 1;
    int isum = 0;
    int icnt = 0;
    int sqrt = 0;

    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            isum = isum + arr[i][j];
        }
    }

    /*  User Defined Logic 
        printf("%d\n",isum);
        while(isum != 0)
        {
            isum = isum - k;
            if(isum < 0)
            {
                break;
            }
            icnt++;
            k += 2;
        }
    */

    return isum;
}


int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    int i = 0;
    int j = 0;
    int iret = 0;

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

    iret = TraceOfMatrix(arr,irow,icol);
    printf("Trace of matrix is : %d\n",iret);    
    
    iret = NormalOfMatrix(arr,irow,icol);

    //Using inbuilt sqrt function
    printf("Normal of matrix is approx : %.4f\n",sqrt(iret));

    for(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }
    
    free(arr);
    
    return 0;
}