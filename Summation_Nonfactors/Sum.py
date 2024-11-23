"""
    Author : Pakshal Jain
    Date : 05/10/2022
    Program : To Calculate Summation of  Nonfactors of Entered Number
"""

###################################################################################################################################################################

def Summation(No) :
    Sum = 0;

    for i in range(1,No) :
        if(No % i != 0) :
            Sum = Sum + i
    
    return Sum;

###################################################################################################################################################

def main() : 
    No = 0;
    iret = 0;

    print("Jay Ganesh...");
    
    print("Enter One Number..");
    No = int(input());

    iret = Summation(No);
    print("Summation of Nonfactors of Entered Number is :",iret);

#################################################################################################################################################################

#Call Back Method To Call main function
if __name__ == "__main__" :
    main();