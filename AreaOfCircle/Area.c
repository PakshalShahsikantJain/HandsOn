/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Radius of Circle From User and Calculate Area of Circle
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Area of Circle
float AreaOfCircle(float No)
{
    float area = 0.0;

    //Logic
    area = 3.14 * (No * No);

    return area;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    float No = 0.0;
    float fret = 0.0;

    printf("Jay Ganesh...\n");
    
    printf("Enter Radius of Circle..\n");
    scanf("%f",&No);    

    //Call To AreaOfCircle Function
    fret = AreaOfCircle(No);

    //Printing Calculated Area of Circle
    printf("Area of Circle is : %.2f",fret);

    return 0;
}