"""
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 15th bit is On or OFF.
"""

###################################################################################################################################################

#Class Declaration
def ChkBit(iNo) :
    iMask = 0X00004000;
    iResult = 0;

    if(iNo < 0) :
        iNo = -iNo;

    #Logic To Check Bit is On or OFF
    iResult = iNo & iMask;

    if(iResult == iMask) :
        return True;
    else :
        return False;

###########################################################################################################################################################

#Main function
def main() :
    bret = False;
    No = 0;

    print("Jay Ganesh....");
    
    #Taking Input from user
    print("Enter One Number");
    No = int(input());

    #Call To ChkBit Function
    bret = ChkBit(No);

    if(bret == True) :
        print("15th Bit is ON");
    else :
        print("15th Bit is OFF");

###################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();