"""
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th bit of that
              number if it is on. Return modified number. 
"""

#################################################################################################################################################

#Class Declaration
def OffBit(iNo) :
    iResult = 0;
    iMask = 0X00000040;

    #Logic To Off Given Bit
    iResult = iMask & iNo;

    if(iResult == iMask) :
        iResult = iMask ^ iNo;
    

    return iResult;

###################################################################################################################################################3

#Main Function
def main() :
    iret = 0;
    iNo = 0;

    print("Jay Ganesh....");

    #Taking Input from user
    print("Enter One Number");
    iNo = int(input());

    #Call To OffBit Function
    iret = OffBit(iNo);

    #Printing Modified Number
    print("Modified Number is : %d"%iret);

###########################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();