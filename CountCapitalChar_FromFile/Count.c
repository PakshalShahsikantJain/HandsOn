/*
    Author : Pakshal Shashikant Jain 
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Funcction To Count Capital Characters From File
int CountCapital(char fname[])
{
    int fd = 0;
    char arr[100] = {'\0'};
    int i = 0;
    int icnt = 0;
    int iret = 0;

    //Opening File in Read Mode Only
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open File : \n");
        return -1;
    }
    else 
    {
        printf("File Successfully Opened With File Descriptor : %d\n",fd);
    }

    //Reading Data From File and Storing it in Local Array
    while((iret = read(fd,arr,sizeof(fd))) != 0)
    {
        //Counting Number of Capital Characters From File
        for(i = 0;i < iret;i++)
        {
            if((arr[i] >= 'A')&&(arr[i] <= 'Z'))
            {
                icnt++;
            }
        }
    }   

    //Closing File
    close(fd);
    
    //Returning Count of Capital Charcaters 
    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[40] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh......\n");

    //Taking File Name as input From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&arr);

    //Call To CountCapital Function
    iret = CountCapital(arr);

    //Printing Count of Capital Characters
    printf("Count of Capital Characters From File is : %d",iret);

    return 0;
}