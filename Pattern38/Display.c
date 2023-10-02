/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P 
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
void Pattern(char *str)
{
    int i = 0;
    int j = 0;
    int icnt = 0;
    
    if(str == NULL)
    {
        return;
    }

    //Logic To Print Given Pattern
    while(str[icnt] != '\0')
    {
        icnt++;
    }

    printf("Printing Given Pattern : \n");
    for(i = icnt - 1;i >= 0;i--)
    {
        for(j = 0;j < icnt;j++)
        {
            if(i >= j)
            {
                printf("%c\t",str[j]);
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Functions
int main()
{
    char arr[50] = {'\0'};

    printf("Ganapati Bappa Morya Mangal Murti Morya \n");

    //Taking Input from user
    printf("Enter one String \n");
    scanf("%[^'\n']s",arr);

    //Printing Given Pattern
    Pattern(arr);

    return 0;
}