/*
    Auhtor : Pakshal Jain
    Date : 15/10/2022
    Program : To Calculate Percentage
*/

//Required Libraries
#include<stdio.h>

//Function To Calculate Percentage
float Percentage(int No,float No2)
{
    float ans = 0.0;

    //Logic To Calculate
    ans = No2 / No * 100;

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    float No2 = 0.0;
    float fret = 0.0;

    printf("Jay Ganesh....\n");
    
    printf("Enter Total Marks..\n");
    scanf("%d",&No);

    printf("Enter Obtained Marks..\n");
    scanf("%f",&No2);

    //Call To Percentage Function
    fret = Percentage(No,No2);

    printf("Percentage is : %.2f%%",fret);

    return 0;
}