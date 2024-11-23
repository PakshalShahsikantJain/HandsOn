"""
    Author : Pakshal Jain
    Date : 02/03/2023
    Program : To Print Below Given Pattern 

    Input : iRow = 3 iCol = 5
    Output : 5 4 3 2 1
             5 4 3 2 1
             5 4 3 2 1 
"""

###############################################################################################################################

#Function To Print Below Pattern
def Pattern(No,No2) :
    i = 0;
    j = 0;

    #Logic TO Print Given Pattern
    print("Printing Given Pattern");
    for i in range(1,No + 1) :
        for j in range(No2,0,-1) :
            print("%d\t"%j,end = "");
        print();

###########################################################################################################################3

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking input From  User
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter Number of Columns You Want");
    No2 = int(input());

    #Call To Print Pattern Function
    Pattern(No,No2);

############################################################################################################################################

#Callback Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();