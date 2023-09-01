"""
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th and
              10th bit of that number. Return modified number.  

              Input : 137
              Output : 713
"""


#################################################################################################################################################

#Class Declaration
def ToggleBit(iNo) :
    iResult = 0;           #  0    0    0    0    0    0    4    0 
    iMask = 0X00000240;    # 0000 0000 0000 0000 0000 0010 0100 0000

    #Logic To Toggle Given Bit
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

    #Call To ToggleBit Function
    iret = ToggleBit(iNo);

    #Printing Modified Number
    print("Modified Number is : %d"%iret);

###########################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();