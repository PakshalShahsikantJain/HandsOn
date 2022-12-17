"""
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered Number
"""

######################################################################################################################################

#Class Declaration
class EvenFact :
    #Characteristics of class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        #Handeling Condition if Entered Number is Negative
        if(no < 0) :
            no = -no;
        #Assigning Value to Characteristics of Class
        self.No = no;

    #Behaviour of Class
    def Calculate(self) :
        i = 0;
        Fact = 1;

        #Logic To Calculate Even Factorial of Number
        for i in range(self.No,0,-1) :
            if(i % 2 == 0) :
                Fact = Fact * i;
        
        return Fact;

#############################################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    #Taking input From user
    print("Enter One Number");
    No = int(input());

    #Creating object of EvenFact Class
    eobj = EvenFact(No);
    #Call To Behaviour of Class
    iret = eobj.Calculate();

    #Printing obtained Output
    print("Even Factorial of Entered Number is :",iret);

##################################################################################################################################3

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();