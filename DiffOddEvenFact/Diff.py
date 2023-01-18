"""
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Difference Between Even and Odd Factorial of Entered Number
"""

############################################################################################################

#Function To Calculate Differnec
def Difference(No) :
    i = 0;
    EvenFact = 1;
    OddFact = 1;

    if No < 0 :
        No = -No;

    #Logic To Calculate Difference
    for i in range(No,0,-1) :
        if(i % 2 != 0) :
            OddFact = OddFact * i;
        else :
            EvenFact = EvenFact * i;
    
    #Calcualting Difference
    Diff = EvenFact - OddFact;

    return Diff;

#################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Takig Input From User
    print("Enter One Number You Want");
    No = int(input());

    #Call To Difference Function
    iret = Difference(No);

    print("Difference Between Even and Odd Factorial is :",iret);

################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();