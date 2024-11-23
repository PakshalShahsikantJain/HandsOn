"""
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 5 iCol = 5
    Output : a b c d e
             1 2 3 4 5
             a b c d e
             1 2 3 4 5
             a b c d e
"""

##########################################################################################################################################

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

        for i in range(self.No) :
            for j in range(self.No2) :
                if(i % 2 == 0) :
                    print("%c"%chr(j + 97),end = "\t");
                else :
                    print("%d"%(j + 1),end = "\t");
            print();

##################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh.....");

    #Taking input From User
    print("Enter Number of Rows You Want...");
    No = int(input());

    print("Enter Number of Columns You Want....");
    No2 = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No,No2);

    #Call To Behaviour of Class
    pobj.Display();

#######################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();