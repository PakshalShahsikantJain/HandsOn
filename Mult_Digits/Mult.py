"""
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Multiplication of Digits of Entered Number
"""
#########################################################################################################################
#Function To Calculate Mutiplication of Digits
def MultDigits(No) :
    Digit = 0;
    Mult = 1;

    #Logic To Calculate Multiplication
    while(No != 0) :
        Digit = No % 10;
        if Digit == 0 :
            Digit = 1;
        Mult = Mult * Digit;
        No = No // 10;
    
    return Mult;

#########################################################################################################################
#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");
    
    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Call To MultDigits Function
    iret = MultDigits(No);

    #Printing Multiplication of Digits
    print("Multiplication of Digits of Entered Number is :",iret);

#Call Back Method To Call To Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();