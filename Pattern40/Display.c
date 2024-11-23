/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
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
            if((str[j] >= 'a')&&(str[j] <= 'z'))
            {
                str[j] = str[j] - 32; 
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