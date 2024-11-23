"""
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             2 3 4 5
             3 4 5 6
             4 5 6 7 
"""

#################################################################################################################################################

#Class Declaration
class Pattern :
    #Characteristics of Class
    No = 0;
    No2 = 0;
    
    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;
    
    #Behaviour of Class
    def Display(self) :
        i = 0;
        j = 0;
        k = 1;

        #Logic To Print Pattern 
        print("Printing Below Given Pattern : ");
        for i in range(self.No) :
            for j in range(self.No2) :
                print("%d"%k,end = "\t");
                k = k + 1;
                if j == self.No2 - 1 :
                    k = k - 3;
            print();

######################################################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh.....");

    #Taking Input From User
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter Number of Columns You Want");
    No2 = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No,No2);

    #Call To Display Function
    pobj.Display();

#################################################################################################################################################################333

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();