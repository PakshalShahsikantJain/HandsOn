/*
    Pakshal Jain
    Date : 12/10/2022
    Program : To Calculate Multiplication of Three Numbers
*/

//Requierd Libraries 
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Multiplication of Three Numbers
int Mult(int No,int No2,int No3)
{
    int ans = 0;

    //Logic
    //Handeling Conditions if any of The Number is 0
    if((No == 0)&&(No2 == 0))
    {
        ans = No3;
    }
    else if((No2 == 0)&&(No3 == 0))
    {
        ans = No;
    }
    else if((No == 0)&&(No3 == 0))
    {
        ans = No2;
    }
    else if(No == 0)
    {
        ans = No2 * No3;
    }
    else if(No2 == 0)
    {
        ans = No * No3;
    }
    else if(No3 == 0)
    {
        ans = No * No2;
    }
    //Handeling Condtion if Non of The Number is Zero
    else 
    {
        ans = No * No2 * No3;
    }

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int No2 = 0;
    int No3 = 0;

    int iret = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter First Number..\n");
    scanf("%d",&No);

    printf("Enter Second Number...\n");
    scanf("%d",&No2);

    printf("Enter Third Number....\n");
    scanf("%d",&No3);

    //Handeling Condition if All Three Numbers as 0
    if((No == 0)&&(No2 == 0)&&(No3 == 0))
    {
        iret = No * No2 * No3;
    }
    else 
    {
        //Call To Mult Function
        iret = Mult(No,No2,No3);
    }
      
    //Printing Final Output
    printf("Multiplication is : %d",iret);

    return 0;
}