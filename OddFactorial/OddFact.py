"""
    Author : Pakshal Jain
    Date : 14/01/2023
    Program : To Calculate OddFactorial of Entered Number
"""

####################################################################################################################

#Class Declaration
class OddFact :

    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        if no < 0 :
            no = -no;

        self.No = no;
    
    #Behaviour of Class
    def Calculate(self) :
        fact = 1;
        i = 0;

        #Logic
        for i in range(self.No,0,-1) :
            if(i % 2 != 0) :
                fact = fact * i;
            
        return fact;
#End of Class

#######################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh.....");

    #Taking Input From User
    print("Enter Number To Calcualte Factorial of : ");
    No = int(input());

    #Creating object of OddFact Class
    obj = OddFact(No);

    #Call To Behaviour of Class
    iret = obj.Calculate();

    print("Odd Factorial of Entered Number is :",iret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();