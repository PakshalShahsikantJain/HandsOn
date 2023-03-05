"""
    Author : Pakshal Shahsikant Jain 
    Date : 04/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : A B C D
             A B C D
             A B C D
             A B C D 
"""

#########################################################################################################

#Function To Print Given Pattern
def Pattern(No,No2) :
    i = 0;
    j = 0;

    #Logic To Print Given Pattern 
    for i in range(No) :
        for j in range(No2) :
            print("%c\t"%chr(j + 65),end = "");
        print();

###################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Number of Rows You Want...");
    No = int(input());

    print("Enter Number of Columns You Want...");
    No2 = int(input());

    #Call To Pattern Function
    Pattern(No,No2);

####################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();