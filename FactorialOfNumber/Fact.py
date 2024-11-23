"""
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : To Calculate Factorial of Entered Number
"""

#Function To Calculate Factorial
def Factorial(No) :
    i = 0;
    fact = 1;

    #Handeling Condition if Entered Number is Negative
    if(No < 0) :
        No = -No;

    #Logic
    for i in range(No,0,-1) :
        fact = fact * i;
    
    return fact;
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    print("Enter One Number...");
    No = int(input());
    
    #Call To Factorial Function
    iret = Factorial(No);

    print("Factorial of Entered Number is :",iret);

#Call Back Method To Call Main Function
if __name__ =="__main__" :
    main();