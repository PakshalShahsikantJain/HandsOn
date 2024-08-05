"""
    Author : Pakshal Shashikant Jain
    Date : 05/08/2024
    Program : Write a program which accept matrix and swap the contents of consecutive rows.  
"""

#Required libraries
import numpy as np 

############################################################################################################################################33333

#Function to swap rows elements of matrix
def SwapRows(arr,irow,icol) :
    i = 0;
    j = 0;
    temp = 0;

    #Logic to swap consecutive rows
    for i in range(0,irow,2) :
        for j in range(icol) :
            temp = arr[i][j];
            arr[i][j] = arr[i+1][j];
            arr[i+1][j] = temp;

    print("Matrix after swapping rows is : ");
    for i in range(irow) :
        for j in range(icol) :
            print("%d\t"%arr[i][j],end="");
        print("");


##############################################################################################################################333

#Main Function
def main() :
    i = 0;
    j = 0;
    iRow = 0;
    iCol = 0;
    iret = 0;

    arr = [[]];

    print("Jay Ganesh.....");

    #Taking input from user
    print("Enter number of Rows : ",end = "");
    iRow = int(input());

    print("Enter number of Columns : ",end = "");
    iCol = int(input());

    #Allocating memory of matrix
    arr = np.zeros((iRow,iCol));

    #Taking elements of matrix as input from user 
    for i in range(iRow) :
        print("Enter element of %d row : "%(i +1));
        for j in range(iCol) :
            print("Enter element no %d : "%(j + 1),end = "");
            arr[i][j] = int(input());

    #Printing elements of matrix
    print("Elemnts of matrix :");
    for i in range(iRow) :
        for j in range(iCol) :
            print("%d \t"%arr[i][j],end = "");
        print("");

    #Call to SwapRows function
    SwapRows(arr,iRow,iCol);
    
##################################################################################################################################################33

#Call back method to call main function
if __name__ == "__main__" :
    #Call to main function
    main();