"""
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
"""

#############################################################################################################################################

#Function To Count Number of ON Bits in Entered Number
def CountOnBit(iNo) :
    iResult = 0;
    i = 0;
    iMask = 0X00000001;
    icnt = 0;


    #Logic To Count Number of ON bits
    for i in range(1,33) :
        iMask = iMask << (i - 1);
        
        iResult = iMask & iNo;
        if(iResult == iMask) :
            icnt = icnt + 1;
        
        iMask = 0X00000001;
        iResult = 0;

    return icnt;

#Main Function
def main() :
    iNo = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Taking Input from user
    print("Enter one number");
    iNo = int(input());

    #Call To CountOnBit Function
    iret = CountOnBit(iNo);

    #Printinting Count of ON Bits of Entered Number
    print("Count of ON Bits in entred Number is :",iret);

########################################################################################################################################3

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();