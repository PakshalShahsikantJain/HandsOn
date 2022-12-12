"""
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Display Numbers in Entered Range in Reverse Order
"""

##############################################################################################################################################

#Function To Display Range in Reverse Order
def RangeRev(No,No2) :
    i = 0;

    print("Printing Numbers in Entered Range in Reverse Order");

    #Logic
    for i in range(No2,No - 1,-1) :
        print(i,end = "\t");

#######################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay ganesh...");

    #Taking Input From User
    print("Enter Starting Number");
    No = int(input());

    print("Enter Ending Number");
    No2 = int(input());

    if((No < 0)or(No > No2)) :
        print("Invalid Range");
        return;
        
    #Call To Range Function
    RangeRev(No,No2);

#############################################################################################################################################

#Callback Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();