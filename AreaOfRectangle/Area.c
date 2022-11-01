/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Height and Width from user and Calculate area of Rectangle
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Area of Rectangle
float Calculate(float Height,float Width)
{
    float area = 0.0;

    //Logic
    area = Height * Width;

    return area;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    float Height = 0.0;
    float Width = 0.0;
    float area = 0.0;

    printf("Jay Ganesh...\n");
    
    //Taking Input From User
    printf("Enter Height of Rectangle...\n");
    scanf("%f",&Height);

    printf("Enter Width of Rectangle...\n");
    scanf("%f",&Width);

    //Call To Calculate Function
    area = Calculate(Height,Width);

    printf("Area of Rectangle is : %.2f",area);

    return 0;
}