"""
    Author : Pakshal Jain
    Date : 06/11/2022
    Program : To Print Even Numbers in Entered Range
"""
##############################################################################################################################

#Call To Range Function
def Range(No,No2) :
    i = 0;

    #Logic To Print Even Numbers in Range
    print("Printing Even Numbers in Entered Range");
    for i in range(No,No2 + 1) :
        if(i % 2 == 0) :
            print(i,end = "\t");

#############################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");
    
    #Taking Input From User
    print("Enter Starting Number...");
    No = int(input());

    print("Enter Ending Number....");
    No2 = int(input());

    #Call To Range Function
    Range(No,No2);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();