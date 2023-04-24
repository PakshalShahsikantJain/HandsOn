"""
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
"""

##############################################################################################################################################################

#Class Declaration
class Pattern :

    #Charateristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self) :
        self.No = 0;
        self.No2 = 0;
    
    #Behaviour of Class To Take Input From User
    def Accept(self) :
        print("Enter Number of Rows You Want : ");
        self.No = int(input());

        print("Enter Number of Columns You Want : ");
        self.No2 = int(input());
    
    #Behaviour of Class To display Given Pattern 
    def Display(self) :
        i = 0;
        j = 0;

        #Logic To Build To Given Pattern
        print("Printing Below Given Pattern : ");
        for i in range(1,self.No + 1) :
            for j in range(1,self.No2 + 1) :
                if((i == j)or(i == 1)or(j == 1)or(i == self.No)or(j == self.No2)) :
                    print("%d"%j,end = "\t");
                else :
                    print(" ",end = "\t");
            print();

########################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh...");

    #Creating object of Pattern Class
    pobj = Pattern();

    #Calls To Behaviour of Class
    pobj.Accept();
    pobj.Display();

##################################################################################################################################################3

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();