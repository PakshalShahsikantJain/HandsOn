"""
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and display addition of elements From each
              column  
"""

#Required libraries
import numpy as np 

############################################################################################################################################33333

#Function to add columns elements of matrix
def AddColumns(arr,irow,icol) :
    i = 0;
    j = 0;
    isum = 0;

    #logic to add columns elements
    print("Addition of each elements of each columsn is as follows : ");
    for i in range(irow) :
        for j in range(icol) :
            isum = isum + arr[j][i];
        print("%d"%isum,end="\t");

        isum = 0;

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

    #Call to AddColumns function
    AddColumns(arr,iRow,iCol);
    
##################################################################################################################################################33

#Call back method to call main function
if __name__ == "__main__" :
    #Call to main function
    main();