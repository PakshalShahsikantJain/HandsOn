"""
    Author : Pakshal Jain
    Date : 16/02/2023
    Program : To Print Below Pattern

    Input : 5
    Output : 1 * 2 * 3 * 4 * 5 *

"""

######################################################################################

#Class Declaration
class Pattern :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    
    #Behaviour of Class
    def Display(self) :
        i = 0;

        for i in range(1,self.No + 1) :
            print("%d\t*\t"%i,end = "");

##################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter Number Till You Want To Print");
    No = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No);

    #Call To Behaviour of Class
    pobj.Display();

################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();