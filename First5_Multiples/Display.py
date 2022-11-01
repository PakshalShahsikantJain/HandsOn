"""
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From User and Print First Five Multiples of That Number
"""

#Function To Calculate Multiples
def Multiples(No) :
    i = 0;
    Mult = 0;

    #Logic
    print("Printing First Five Multiples of Entered Number");
    for i in range(1,5 + 1) :
        Mult = No * i;
        print(Mult,end = "\t");

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");
    
    #Taking INput From user
    print("Enter One Number");
    No = int(input());

    #call To Multiples Function
    Multiples(No);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call TO Main Function
    main();