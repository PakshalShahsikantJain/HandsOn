/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String in Reverse Order
void StrCpyRev(char *src,char *dest)
{
    int istart = 0;
    int iend = 0;
    char temp = '\0';

    //Handeling Conditions if Memory of String Not Allocated Properly
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy string in Reverse Order
    while(src[iend] != '\0')
    {
        iend++;
    }

    iend--;

    while(istart < iend)
    {
        temp = src[istart];
        src[istart] = src[iend];
        src[iend] = temp;

        istart++;
        iend--;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh......\n");

    //Taking Input from user    
    printf("Enter One String...\n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyRev Function
    StrCpyRev(arr,brr);

    //Printing Reversed String
    printf("String Copied in Reverse String is : %s",brr);

    return 0;
}