"""
    Author : Pakshal Shashikant Jain
    Date : 26/08/2024
    Program : Write a program which accept matrix from user and return addition of Border
              elements.
"""

#Required libraries
import numpy as np 

############################################################################################################################################33333

#Function to add Border elements of matrix
def AddBorder(arr,irow,icol) :
    i = 0;
    j = 0;
    isum = 0;

    #logic to add Border elements
    for i in range(irow) :
        for j in range(icol) :
            if((i == 0)or(j == 0)or(i == (irow - 1))or(j == (icol - 1))) :
                isum = isum + arr[i][j];

    return isum;

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

    #Call to AddBorder function
    iret = AddBorder(arr,iRow,iCol);
    
    #Printing addition of Border elements
    print("Addition of Border elements is : %d"%iret);

##################################################################################################################################################33

#Call back method to call main function
if __name__ == "__main__" :
    #Call to main function
    main();