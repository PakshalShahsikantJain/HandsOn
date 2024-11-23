"""
    Author : Pakshal Shashikant Jain
    Date : 13/04/2023
    Program : To Print Below Given Pattern
    Input : iRow = 6 iCol = 6
    Output : * * * * * *
             *       * *
             *     *   *
             *   *     *
             * *       *
             * * * * * * 
"""

##########################################################################################################################

#Class Declaration
class Pattern :
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;
    
    #Constructor of Class
    def Display(self) :
        i = 0;
        j = 0;

        #Logic To Print Given Pattern
        print("Printing Below Given Pattern : ");
        for i in range(self.No,0,-1) :
            for j in range(1,self.No2 + 1) :
                if((i == j)or(i == 1)or(j == 1)or(i == self.No)or(j == self.No2)) :
                    print("*",end = "\t");
                else :
                    print(" ",end = "\t");
            print();

################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter Number of Rows You Want..");
    No = int(input());

    print("Enter Number of Columns You Want..");
    No2 = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No,No2);
    #Call To Behaviour of Class
    pobj.Display();

###################################################################################################################################

#Call Back method to call main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();