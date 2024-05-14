/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Small Characters Present In Entered String
int Count(char *str)
{
    static int icnt = 0;

    //Logic To Count
    if(*str != '\0')
    {
        if((*str >= 'a')&&(*str < 'z'))
        {
            icnt++;
        }
        str++;

        //Recusive Function Call To Count Function
        Count(str);
    }

    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User   
    printf("Enter One String : ");
    scanf("%[^'\n']s",&arr);

    //Call To Count Function
    iret = Count(arr);

    //Printing Count Calculated
    printf("Count of Small Characters in Entered String '%s' is : %d",arr,iret);

    return 0;
}