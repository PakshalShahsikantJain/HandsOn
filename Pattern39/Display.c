/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : “PPA”
              Output : 
              P
              P P
              P P A 
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
void Pattern(char *str)
{
    int i = 0;
    int j = 0;
    int icnt = 0;

    if(str == NULL)
    {
        return;
    }

    //Logic To Display Given Pattern
    while(str[icnt] != '\0')
    {
        icnt++;
    }

    //Printing Given Pattern
    printf("Printing Given Pattern : \n");
    for(i = 0;i < icnt;i++)
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking input from user    
    printf("Enter one String \n");
    scanf("%[^'\n']s",arr);

    //Call To Pattern Function
    Pattern(arr);
    
    return 0;
}