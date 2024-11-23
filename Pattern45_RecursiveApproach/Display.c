/*
    Author: Pakshal Shashikant Jain
    Date: 04/05/2024
    Program: Write a recursive program which display below pattern.
             Output : A B C D E F 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Liibraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
void Display(int ino,char ch)
{
    if(ino < 1)
    {
        return;
    }
    else 
    {
        printf("%c \t",ch);
        ch++;
        ino--;

        //Recursive Function Call
        Display(ino,ch);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    char ch = '\0';

    printf("Jay Ganesh....\n");

    printf("Enter Starting Alphabet : ");
    scanf("%c",&ch);

    printf("Enter One Number Till You Want To Print Alphabets from Given Alphabet : ");
    scanf("%d",&ino);

    //Call To Display Function
    Display(ino,ch);

    return 0;
}