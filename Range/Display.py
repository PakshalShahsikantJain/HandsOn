"""
    Author : Pakshal Jain
    Date : 04/11/2022
    Program : To Accept Range From user and Print Numbers Between That Range
"""

#Class Declaration
class Range :
    #Characteristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Classs
    def __init__(self,no,no2) :

        #Handiling Condition if Starting number is Greater Than ending Number
        if(no > no2) :
            print("Invalid Range");

            exit();

        self.No = no;
        self.No2 = no2;
    #Behaviour of Class
    def Display(self) :
        i = 0;

        print("Printing Number Between Entered Range");
        for i in range(self.No,self.No2 + 1,1) :
            print(i,end = "\t");

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Jay Ganesh...");

    print("Enter Starting Number");
    No = int(input());

    print("Enter Ending Number");
    No2 = int(input());

    #Creating object of Range Class
    robj = Range(No,No2);
    #Call To Behaviour of Class
    robj.Display();

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();