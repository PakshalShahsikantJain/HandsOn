"""
    Author : Pakshal Shashikant Jain
    Date : 14/09/2022
    Program : To Print * Entered Number of Times
"""

################################################################################################################################################################################

#Declaration of Class
class Pattern :

    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Display(self) :
        i = 0;

        print("Printing *",self.No,"times : ");
        for i in range(self.No) :
            print("*",end = " ");

#############################################################################################################################################################################

def main() :
    No = 0;

    print("Jay Ganesh.....");
    print("Enter One Number");
    No = int(input());
    
    #Creating object of Class
    pobj = Pattern(No);
    #Call To Behaviour of Class
    pobj.Display();

################################################################################################################################################################################

if __name__ == "__main__" :
    main()