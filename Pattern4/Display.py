"""
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
"""

##################################################################################################################################

#Class Declaration
class Pattern :
    #Characateristics of Class
    No = 0;

    #Constructor of Class Parameterised Constructor of Class
    def __init__(self,no) :
        self.No = no;
    
    #Behaviour of Class
    def Display(self) :
        i = 0;
        Sum = 0;    

        #Logic To Print Given Pattern
        for i in range(self.No) :
            Sum = i + 65;
            print("%c"%(Sum),end = " ");
#End Of Class

##############################################################################################################################

#Main Function
def main() :
    No = 0;

    print("Ganapati Bappa Morya...");

    #Taking Input From User
    print("Enter Number Till You Want To Print Pattern");
    No = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No);

    #Call To Behaviour of Class
    pobj.Display();

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();