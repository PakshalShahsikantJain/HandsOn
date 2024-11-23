/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Exam Time According To Division
void Display(char ch)
{
    //Handeling Case Sensitive Conditions
    if((ch >= 'a')&&(ch <= 'z'))
    {
        ch = ch - 32;
    }

    //Logic
    switch(ch)
    {
        case 'A' : 
        {
            printf("Your Exam is at 7 AM \n");
            break;
        }
        case 'B' :
        {
            printf("Your Exam is at 8:30 AM \n");
            break;
        }
        case 'C' :
        {
            printf("Your Exam is At 9:20 AM \n");
            break;
        }
        case 'D' :
        {
            printf("Your Exam is At 10:30 AM \n");
            break;
        }
        default :
        {
            printf("Invalid Division\n");
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char ch = '\0';

    //Taking Input from user
    printf("Enter One Character \n");
    scanf("%c",&ch);

    //Call To Display Function
    Display(ch);

    return 0;
}