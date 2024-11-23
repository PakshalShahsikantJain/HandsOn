/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

///////////////////////////////////////////////////////////////////////////////////////////////

//Requried Librariess
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
void Pattern(char *str)
{
    int icnt = 0;
    int i = 0;
    int j = 0;

    if(str == NULL)
    {
        return;
    }

    //Logic To Print Given Pattern
    while(str[icnt] != '\0')
    {
        icnt++;
    }

    for(i = 0;i < icnt;i++)
    {
        for(j = 0;j < icnt;j++)
        {
            printf("%c\t",str[j]);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay Ganesh...\n");

    //Taking Input from user
    printf("Enter One String...\n");
    scanf("%[^'\n']s",arr);

    //Call To Pattern Function
    Pattern(arr);

    return 0;
}