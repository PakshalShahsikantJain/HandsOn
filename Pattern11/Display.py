"""
    Author : Pakshal Jain 
    Date : 02/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 3 iCol = 4
    Output : * # * #
             * # * #
             * # * # 
"""

##########################################################################################################################################

#Function To Print Pattern 
def Pattern(No,No2) :
    i = 0;
    j = 0;

    #Logic To Pattern Function
    print("Printing Given Pattern");
    for i in range(1,No + 1) :
        for j in range(1,No2 + 1) :
            if(j % 2 != 0) :
                print("*\t",end = "");
            else :
                print("#\t",end = "");
        print();

###########################################################################################################################################3

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter Number of Columns You Want");\
    No2 = int(input());

    #Call To Pattern Function
    Pattern(No,No2);

#####################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();