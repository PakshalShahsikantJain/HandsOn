/*
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
*/

///////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Function To Count Frequecny of Entered Character
int CountChar(char fname[],char ch) 
{
    int fd = 0;
    char arr[100] = {'\0'};
    int i = 0;
    int icnt = 0;
    int iret = 0;

    //Opening File in Read Only Mode
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File");
    }
    else 
    {
        printf("File Successfully Opened With Descriptor %d\n",fd);
    }
    
    //Reading Data From File and Storing it in Local array 
    printf("Data From File is : \n");
    while((iret = read(fd,arr,sizeof(fd))) != 0)
    {
        write(1,arr,iret);

        //Counting Frequency of Entered Character
        for(i = 0;i < iret;i++)
        {
            if(arr[i] == ch)
            {
                icnt++;
            }
        }
    }

    //Closing File
    close(fd);

    //Returing Count of Entered Character From File 
    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[40] = {'\0'};
    int iret = 0;
    char ch = ' ';

    printf("Jay Ganesh....\n");

    //Taking File Name and Character as Input From User
    printf("Enter One File Name : \n");
    scanf("%[^'\n']s",&arr);

    printf("Enter Character To Count Frequency of : ");
    scanf(" %c",&ch);

    //Call To CountChar Function
    iret = CountChar(arr,ch);

    //Printing Count of Entered Character 
    printf("\nCount of Entered Character %c From File is %d",ch,iret);
    
    return 0;
}