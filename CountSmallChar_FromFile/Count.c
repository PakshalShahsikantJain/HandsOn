/*
    Author : Pakshal Shashikant Jain 
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Small Characters From File
int CountSmall(char fname[]) 
{
    int fd = 0;
    char arr[100] = {'\0'};
    int iret = 0;
    int i = 0;
    int icnt = 0;

    //Opening File in Read Only Mode
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return -1;
    }
    else 
    {
        printf("File Successfully Opened with File Descriptor : %d\n",fd);
    }

    //Reading File Data in chunks of bytes
    printf("Data From File is : \n");
    while((iret = read(fd,arr,sizeof(fd))) != 0)
    {
        write(1,arr,iret);  //writing Data on Console , 1 means STDOUT and STDOUT means Console or Monitor

        //Counting Small Characters From File
        for(i = 0;i < iret;i++)
        {
            if((arr[i] >= 'a')&&(arr[i] <= 'z'))
            {
                icnt++;
            }
        }
    }

    close(fd);

    //Returning Count of Small Character
    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iret = 0;
    char arr[40] = {'\0'};

    printf("Jay Ganesh.....\n");

    //Taking File Name as Input From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&arr);

    //Call To CountSmall Function
    iret = CountSmall(arr);
    
    //Printing Count of Small Characters
    printf("\nCount of Small Characters From File is : %d",iret);

    return 0;
}