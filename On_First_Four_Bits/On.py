"""
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and on its first 4
              bits. Return modified number.

              Input : 73
              Output : 79 
"""

#################################################################################################################################################

#Class Declaration
def OnBit(iNo) :
    iResult = 0;
    iMask = 0X0000000F;

    #Logic To On Given Bit
    iResult = iMask | iNo;

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

    #Call To OnBit Function
    iret = OnBit(iNo);

    #Printing Modified Number
    print("Modified Number is : %d"%iret);

###########################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();