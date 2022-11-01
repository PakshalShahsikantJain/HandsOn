"""
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Differece Between Summation of Even and Odd Digits of Entered Number
"""

#Function To Calcualate Difference
def Difference(No) :
    Digits = 0;
    Sum = 0;
    Sum2 = 0;
    Diff = 0;

    #Logic
    while(No != 0) :
        Digits = No % 10;
        
        if(Digits % 2 == 0) :
            Sum = Sum + Digits;
        elif(Digits % 2 != 0) :
            Sum2 = Sum2 + Digits;
        
        No = No // 10;

    Diff = Sum - Sum2;

    return Diff;

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Call To Difference Function
    iret = Difference(No);

    #Printing Difference Calculated
    print("Difference Between Summation of Even And Odd Digits is :",iret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();