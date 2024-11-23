"""
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and Tpggle
              that bit. Return modified number.

              Input : 10 3
              Output : 14 
"""

########################################################################################################################################################

#Function To Toggle Bit At Entered Position
def Toggle(iNo,iPos) :
    iMask = 0X00000001;
    iResult = 0;

    if(iNo < 0) :
        iNo = -iNo;
    
    if((iPos < 1)or(iPos > 32)) :
        return 0;

    #Logic To Toggle Bit
    iMask = iMask << (iPos - 1);
    
    iResult = iMask ^ iNo;

    return iResult;

###################################################################################################################################################

#Main Function
def main() :
    iNo = 0;
    iPos = 0;
    iret = 0;

    print("Jay ganesh....");

    #Taking Input from user
    print("Enter One Number");
    iNo = int(input());

    print("Enter One Position");
    iPos = int(input());

    #Call To Toggle Function
    iret = Toggle(iNo,iPos);

    #Printing Modified Number
    print("Modified Number is : %d"%iret);

############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();