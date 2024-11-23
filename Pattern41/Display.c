/*
    Author : Pakshal Shashikant Jain
    Date : 07/10/2023
    Program : Write a program which accept string from user and print below pattern.

              Input : "Marvellous"
              Output : m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To display Given Pattern
void Display(char *str)
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

    printf("Printing Given Pattern :\n");
    for(i = 0;i < icnt;i++)
    {
        for(j = 0;j < icnt;j++)
        {
            if((str[j] >= 'A')&&(str[j] <= 'Z'))
            {
                str[j] = str[j] + 32; 
            }

            printf("%c\t",str[j]);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String....\n");
    scanf("%[^'\n']s",arr);

    //Call To Display Function
    Display(arr);

    return 0;
}