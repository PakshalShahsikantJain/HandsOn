"""
    Author : Pakshal Shashikant Jain 
    Date : 05/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : A B C D
             a b c d
             A B C D
             a b c d 
"""

######################################################################################################

#Function To Print Pattern
def Pattern(No,No2) :
    i = 0;
    j = 0;

    #Logic To Print Pattern
    for i in range(No) :
        for j in range(No2) :
            if(i % 2 == 0) :
                print("%c"%chr(j + 65),end = "\t");
            else :
                print("%c"%chr(j + 97),end = "\t");
        print();

#########################################################################################

#Main Function 
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter NUmber of Columns You Want");
    No2 = int(input());

    #Call To Pattern Function
    Pattern(No,No2);

###############################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();