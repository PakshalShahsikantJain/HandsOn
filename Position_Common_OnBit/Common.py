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
def CommonBit(iNo,iNo2) :
    iResult = 0;
    iPos = 0;
    iRem = 0;
    
    iResult = iNo & iNo2;

    print("Positions of Common On Bits is : ");
    iPos = 1;
    while(iResult != 0) :
        iRem = iResult % 2;
        if(iRem == 1) :
            print(iPos,end = "\t");
        iPos = iPos + 1;
        iResult = iResult // 2;
        

#Main Function
def main() :
    iNo = 0;
    iNo2 = 0;

    print("Jay Ganesh....");

    #Taking Input from user
    print("Enter one number");
    iNo = int(input());

    print("Enter Second number");
    iNo2 = int(input());

    #Call To CommonBit Function
    CommonBit(iNo,iNo2);

########################################################################################################################################3

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();