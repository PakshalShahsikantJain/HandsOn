/* 
    Auhtor : Pakshal Jain
    Date : 18/10/2022
    Program : To Count Frequecy of Digits Which is Less Than 6
*/

//Required Libraries
#include<stdio.h>

//Function To Count Frequecy
int Frequency(int No)
{
    int icnt = 0;
    int Digit = 0;

    //Logic
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit < 6)
        {
            icnt++;
        }
        No = No / 10;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter One Number..\n");
    scanf("%d",&No);

    //Call To Frequecy Function
    iret = Frequency(No);

    printf("Frequecy of Digits Less Than 6 is : %d",iret);

    return 0;
}