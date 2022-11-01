////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Author :  Pakshal Jain 
//  Program : To Divide Two Numbers
//  Date : 04/09/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////

//Importing Required Packages/Libraries
#include <stdio.h>

// Function TO Divide Two Numbers 
int Divi(int No,int No2)
{
    int ans = 0;

    if(No2 == 0)
    {
        printf("\nError : Please Enter Number Greater Than Zero \n");
        return 0;
    }
    else if(No2 < 0)
    {
        No2 = -No2;
    }

    ans = No / No2;

    return ans;
}

//Starting Point of Program
int main()
{
    int no = 0;
    int no2 = 0;
    int iret = 0;
    
    printf("Enter First Number...\n");
    scanf("%d",&no);

    printf("Enter Second Number....\n");
    scanf("%d",&no2);

    iret = Divi(no,no2);

    printf("Division is : %d",iret);

    return 0;
}
