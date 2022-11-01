"""
    Author : Pakshal Jain 
    Date : 19/10/2022
    Program : To Count Frequency of Digits Which Are Between 3 and 7 in Entered Number
"""

####################################################################################################################################

#Function To Count Frequecy
def Frequency(No) :
    Digit = 0;
    icnt = 0;

    #Logic
    while(No != 0) :
        Digit = No % 10;
        if((Digit > 3)and(Digit < 7)) :
            icnt = icnt + 1
        No = No // 10;
    
    return icnt;

############################################################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");
    
    #Taking input From User
    print("Enter One Number");
    No = int(input());

    #Call To Frequecy Function
    iret = Frequency(No);
    print("Frequency of Digits Between 3 and 7 in Entered Number is :",iret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();