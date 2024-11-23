/*
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count WhiteSpaces From File 
int CountWhiteSpace(char fname[]) 
{
    int icnt = 0;
    int fd = 0;
    int iret = 0;
    int i = 0;
    char arr[100] = {'\0'};

    //Opening File in Read Mode Only
    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable To Open File \n");
        return -1;
    }
    else 
    {
        printf("File Successfully Openend With File Descriptor : %d \n",fd);
    }

    //Reading Data From File in Chunks of bytes and Storing it in Local Array
    printf("Data From File is : \n");
    while((iret = read(fd,arr,sizeof(fd))) != 0) 
    {
        write(1,arr,iret);

        //Counting Number of White Spaces From File 
        for(i = 0;i < iret;i++)
        {
            if(arr[i] == ' ')
            {
                icnt++;
            }
        }
    }

    close(fd);

    //Returning Count of White Spaces
    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char fname[40] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking File Name as Input From User
    printf("Enter File Name : \n");
    scanf("%[^'\n']s",&fname);

    //Call To CountWhiteSpace Function
    iret = CountWhiteSpace(fname);
    
    //Printing Count of White Space
    printf("\nCount of White Space From File is : %d",iret);
    
    return 0;
}