"""
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Print Below pattern
    
    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #
"""

###############################################################################################################################

#Function To Print Pattern
def Pattern(No) :
    i = 0;

    #Handeling Condition if Entered Number is Less Than 0
    if(No < 0) :
        No = -No;

    #Logic To Print Pattern
    for i in range(No) :
        print("*",end ="\t");
    
    for i in range(No) :
        print("#",end = "\t");

############################################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Call To Main Function
    Pattern(No);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();