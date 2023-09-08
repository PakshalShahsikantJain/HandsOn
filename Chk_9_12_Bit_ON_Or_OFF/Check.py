"""
    Author : Pakshal Shashikant Jain
    Date : 09/09/2023
    Program : Write a program which accept one number from user and check whether
              9th or 12th bit is on or off.
"""

###################################################################################################################################################

#Class Declaration
def ChkBit(iNo) :             #  0     0     0     0     0     1     0     0
    iMask = 0X00000100;       # 0000  0000  0000  0000  0000  0001  0000  0000
                              #  0     0     0     0     0     8     0     0                                                            
    iMask2 = 0X00000800;      # 0000  0000  0000  0000  0000  1000  0000  0000
    iResult = 0;
    iResult2 = 0;
    
    if(iNo < 0) :
        iNo = -iNo;

    #Logic To Check Bit is On or OFF
    iResult = iNo & iMask;
    iResult2 = iNo & iMask2;

    if((iResult == iMask)or(iResult2 == iMask2)) :
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
        print("One or Both Bits are ON");
    else :
        print("Both BITS are OFF");

###################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();