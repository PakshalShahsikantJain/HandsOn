"""
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Print Digits of Entered Number in reverse order
"""

##########################################################################################################################

#Class Declaration
class Digit :
    #Characteristics of Class
    No = 0;
    
    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Display(self) :
        digit = 0;

        #Logic To Print Digits of Number in rev order
        print("Printing Digits in Reverse order : ");
        while(self.No != 0) :
            digit = self.No % 10;
            print(digit);
            self.No = self.No // 10;

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");
    
    print("Enter One Number");
    No = int(input());
    
    #Creating object of Digit Class
    dobj = Digit(No);
    
    #Calling Behaviour of Class
    dobj.Display();

#Call Back Method TO Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();