"""
    Author : Pakshal Jain
    Date : 25/10/2022
    Program : To Display Table of Entered number in Reverse Order
"""

#Function To Display Table
def Display(No,No2) :
    table = 0;
    i = 0;

    print("Displaying Table in Reverse order..");
    for i in range(No2,0,-1) :
        table = No * i;
        print(table,end = "\t");

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter Number To Display Table of...");
    No = int(input());

    print("Enter Number Till You Want To Display Table eg 2 * ?..");
    No2 = int(input());

    #Call To Display Function
    Display(No,No2);

#Call Back Method To Call Main Function
if __name__ =="__main__" :
    #Call To Main Function
    main();