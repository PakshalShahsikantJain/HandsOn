"""
    Author : Pakshal Jain
    Date : 24/10/2022
    Program : To Display Table of Entered Number
"""

##############################################################################################################################################

#Function To Display Table of Entered Number
def Display(No,No2) :
    i = 0;
    table = 0;

    #Logic To Display table
    print("Printing Table of Entered Number....");
    for i in range(1,No2 + 1,1) :
        table = No * i;
        print(table,end = " ");

#############################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One Number To Display Table of...");
    No = int(input());

    print("Enter Numbet Till You Want To Display Table of...");
    No2 = int(input());

    #Call To Display Function
    Display(No,No2);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();