"""
    Author : Pakshal Shashikant Jain 
    Date : 29/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 5 iCol = 5 
    Output : $ * * * *
             * $ * * *
             * * $ * *
             * * * $ *
             * * * * $
"""

########################################################################################################################

#Class Declaration
class Pattern :
    #Characteristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self) :
        self.No = 0;
        self.No2 = 0;
    
    #Behaviour of Class To Take Input From User
    def Accept(self) :
        print("Enter Number of Rows You Want");
        self.No = int(input());

        print("Enter Number of Columns You Want");
        self.No2 = int(input());

    #Behaviour of Class To Display Below Given Pattern 
    def Display(self) :
        i = 0;
        j = 0;

        #Logic To Print Given Pattern
        print("Printing below Given Pattern : ");
        for i in range(1,self.No + 1) :
            for j in range(1,self.No2 + 1) :
                if(i == j) :
                    print("$",end = "\t");
                else :
                    print("*",end = "\t");
            print();

####################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of Pattern Class
    pobj = Pattern();

    #Call To Behaviours of Class
    pobj.Accept();
    pobj.Display();

#####################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();