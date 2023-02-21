"""
    Author : Pakshal Jain 
    Date : 19/02/2023
    Program : To Print Below Given Pattern

    Input : iRow = 4 iCol = 3
    Output :    1 2 3
                1 2 3
                1 2 3
                1 2 3 
"""

################################################################################################################################

#Function To Print Given Pattern
def Pattern(Row,Col) :
    i = 0;
    j = 0;

    #Logic To Print Given Pattern
    print("Printing Given Pattern");
    for i in range(1,Row + 1) :
        for j in range(1,Col + 1) :
            print("%d"%j,end = "\t");
        print();
        j = 0;

#############################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter Number of Cols You Want");
    No2 = int(input());

    #Call To Pattern Function
    Pattern(No,No2);

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();