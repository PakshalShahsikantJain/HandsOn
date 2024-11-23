"""
    Author : Pakshal Shashikant Jain 
    Date : 19/02/2023
    Program : To Print Below Pattern 

    Input : iRow = 4 iCol = 3
    Output : * * *
             * * *
             * * *
             * * * 
"""

###########################################################################################################################################

#Class Declaration
class Pattern :

    #Characteristics of Class
    Row = 0;
    Col = 0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.Row = no;
        self.Col = no2;
    
    #Behaviour of Class
    def Display(self) :
        i = 0;
        j = 0;

        #Logic To print Given pattern

        print("Printin Given Pattern..");
        for i in range(1,self.Row + 1) :
            for j in range(1,self.Col + 1) :
                print("*",end = "\t");
            print(" ");

##########################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Ganapati Bappa Morya...");

    #Taking Input From user
    print("Enter Number of Rows You Want...");
    No = int(input());

    print("Enter Number of Columns You Want....");
    No2 = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No,No2);

    #Call To Behaviour of Class
    pobj.Display();

#Call Back Method To Call Main Function
if __name__ == "__main__":
    #Call To Main Function
    main();