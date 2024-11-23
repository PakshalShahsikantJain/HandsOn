"""
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and print Numberline of Entered Number
"""

##########################################################################################################################

#Function To Print Number line
def NumberLine(No) :
    i = 0;

    #logic
    print("Printing Number Line of Entered Number");
    for i in range(-No,No + 1) :
        print(i,end = "\t");

###########################################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");
    
    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Call To NumberLine Function
    NumberLine(No);

###################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();