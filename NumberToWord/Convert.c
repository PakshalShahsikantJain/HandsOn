/*
    Author : Pakshal Jain
    Date : 22/10/2022
    Program : To Accept Single Number from user and Print into Word
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert 
void Convert(int No)
{
    //Handeling Condition if Entered Number is Zero
    if(No < 0)
    {
        No = -No;
    }

    //Logic To Convert Number into Word
    switch(No) 
    {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2 :
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default :
            printf("Invalid Number");
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Ganapati Bappa Morya....\n");

    //Taking Input From User
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Convert Function
    Convert(No);

    return 0;
}