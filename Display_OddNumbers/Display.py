"""
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From user and Print Odd Numbers Till Entered Number
"""

##########################################################################################################################

#Function To Print OddNumbers
def OddNumbers(No) :
    i = 0;

    #Logic
    print("Printing Odd Number Till Entered Number");
    for i in range(1,No + 1) :
        if(i % 2 != 0) :
            print(i,end = "\t");

##########################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh....");

    #Taking Input From User 
    print("Enter One Number...");
    No = int(input());

    #Call To OddNumbers Function
    OddNumbers(No);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();