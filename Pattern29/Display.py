"""
    Author : Pakshal Shashikant Jain 
    Date : 07/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 5 iCol = 5
    Output : $ * * * *
             # $ * * *
             # # $ * *
             # # # $ *
             # # # # $
"""

######################################################################################################################################################################

#Class Declaration
class Display :
    #Characteristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;

    #Behaviour of Class
    def Pattern(self) :
        i = 0;
        j = 0;

        #Logic To Print Pattern 
        print("Printing Below Given Pattern : ");
        for i in range(1,self.No + 1) :
            for j in range(1,self.No2 + 1) :
                if(i == j) :
                    print("$",end = "\t");
                elif(i > j) :
                    print("#",end = "\t");
                else :
                    print("*",end = "\t");
            print();

#####################################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Number of Rows You Want...");
    No = int(input());

    print("Enter Number of Columns You Want...");
    No2 = int(input());

    #Creating object of Display Class
    dobj = Display(No,No2);

    #Call To Behaviour of Class
    dobj.Pattern();

####################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();