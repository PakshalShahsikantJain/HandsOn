"""
    Author : Pakshal Shashikant Jain 
    Date : 09/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : * * * #
             * * # @
             * # @ @
             # @ @ @ 
"""

##############################################################################################################################################################

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

        #Logic To Print Given Pattern 
        print("Printing Below Given Pattern : ");
        for i in range(self.No,0,-1) :
            for j in range(1,self.No2 + 1) :
                if(i == j) :
                    print("#",end = "\t");
                elif(i > j) :
                    print("*",end = "\t");
                else :
                    print("@",end = "\t");
            print();

########################################################################################################################################################################

def main() :
    print("Jay Ganesh....");

    #Taking input From User
    print("Enter Number of Rows You Want : ");
    No = int(input());

    print("Enter Number of Columns You Want : ");
    No2 = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No,No2);

    #Call To Display Function
    pobj.Display();

############################################################################################################################################################

#Call Back Method To Call main Function
if __name__ == "__main__" :
    #Call To main Function
    main();