"""
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To display first number in second number of times
"""

####################################################################################################################################

#Class Declaration
class Print :

    #Chracteristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class(Paramterised)
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;
    #Behaviour of Class
    def Display(self) :
        if self.No2 < 0 :
            self.No2 = -self.No2;

        for i in range(self.No2) :
            print(self.No,end = " ");

################################################################################################################################################

def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh.....");
    
    print("Enter Number To Print...");
    No = int(input());

    print("Enter Number To Iterate....");
    No2 = int(input());

    #Creating Object of Class
    pobj = Print(No,No2);
    #Call To Behaviour of Class
    pobj.Display();

if __name__ == "__main__" :
    main();