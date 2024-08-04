"""
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
"""

#################################################################################################################################################################

#Required libraries
import numpy as np

#############################################################################################################################################

#Function to count frequency of entered no from matrix
def CountFrequency(arr,irow,icol,ino) :
    i = 0;
    j = 0;
    icnt = 0;

    #logic to count frequency of entered number
    for i in range(irow) :
        for j in range(icol) :
            if(arr[i][j] == ino) :
                icnt = icnt + 1;

    return icnt;

##########################################################################################################################################################

#Main function
def main() :
    arr = [[]];
    irow = 0;
    icol = 0;
    i = 0;
    j = 0;
    ino = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Taking input from user
    print("Enter number of rows : ");
    irow = int(input());

    print("Enter number of cols : ");
    icol = int(input());

    #Allocating memory to matrix
    arr = np.zeros((irow,icol));

    #Taking input from user
    print("Enter elements in matrix : ");
    for i in range(irow) :
        print("Enter element in %d row : "%(i + 1));
        for j in range(icol) :
            print("Enter element no %d : "%(j + 1),end = "");
            arr[i][j] = int(input());

    #inserting elemtns in matrix 
    print("Enter elements of matrix are : ");
    for i in range(irow) :
        for j in range(icol) :
            print("%d\t"%arr[i][j],end="");
        print();

    #Taking no as input from user
    print("Enter number you want to count frequency of : ",end="");
    ino = int(input());

    #Call to CountFrequency function
    iret = CountFrequency(arr,irow,icol,ino);
    
    #Printing frequency of entered no 
    print("Count of entered no %d is : %d"%(ino,iret));

#################################################################################################################################################################

#Call back method to call main function
if __name__ == "__main__" :
    #Call to main function
    main(); 