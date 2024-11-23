"""
    Author : Pakshal Jain
    Date : 01/10/2022
    Program : To Calculate Mulitplication of Factor of Entered Number
"""

#Function To Calculate Multiplication of Factors of Entered Number
def Fact_Mult(No) :
    Mult = 1;

    #Logic 
    for i in range(1,No) :
        if(No % i == 0) :
            Mult = Mult * i;

    return Mult;

######################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");
    print("Enter One Number");
    No = int(input());

    #Calling Fact_Mult Function
    iret = Fact_Mult(No);
    print("Multiplication of Factors of Entered Number is :",iret);

if __name__ == "__main__" :
    #Call To main Function
    main();