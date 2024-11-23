/*
    Author : Pakshal Shashikant Jain 
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Product
int Product(int isize,int arr[])
{
    int i = 0;
    int imult = 0;

    if(isize < 0)
    {
        isize = -isize;
    }

    //Logic To Calculate Product 
    for(i = 0;i < isize;i++)
    {
        if((arr[i] % 2) != 0)
        {
            imult = imult * arr[i];
        }
    }   

    //Handeling Conditions 
    if(imult == 1)
    {
        imult = 0;
    }

    return imult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int isize = 0;
    int *arr = NULL;
    int iret = 0;
    int i = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From user
    printf("Enter Number of Elements You Want in array\n");
    scanf("%d",&isize);

    //Allocating Memory To array 
    arr = (int *)malloc(isize * sizeof(int));

    //Inserting Elements in array 
    printf("Enter Elements in array\n");
    for(i = 0;i < isize;i++)
    {
        printf("Enter ELement Number %d\n",i+1);
        scanf("%d",&arr[i]);
    }

    //Call To Product Function
    iret = Product(isize,arr);

    printf("Product of Odd Elements From Entered N Number is : %d\t",iret);

    //Deallocating Memory of array 
    free(arr);

    return 0;
}