"""
    Author : Pakshal Shashikant Jain 
    Date : 22/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 5 iCol = 5
    Output : 1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
"""

#####################################################################################################################################################3

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

        #Logic To Print Given Pattern
        print("Printing Below Given Pattern : ");
        for i in range(self.No) :
            for j in range(1,self.No2 + 1) :
                if(i % 2 == 0):
                    print(" %d"%j,end = "\t");
                elif(i % 2 != 0) :
                    print("%d"%(-j),end = "\t");
            print();

##################################################################################################################################################################3333

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh....");

    #Taking input From user
    print("Enter Number of Rows You Want");
    No = int(input());

    print("Enter Number of Columns You Want");
    No2 = int(input());

    #Creating object of Display Class
    dobj = Display(No,No2);

    #Call To Behaviour of Class
    dobj.Pattern();

##############################################################################################################################################################

#Call Back Method To Call main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();