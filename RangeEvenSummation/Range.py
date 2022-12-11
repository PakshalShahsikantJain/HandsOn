"""
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Calculate Summation of Enteres Number in Even Range
"""

#########################################################################################################################################

#Class Declaration
class Range :

    #characterstics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;

    #Behaviour of Class
    def SumEven(self) : 
        i = 0;
        sum = 0;

        #Logic
        for i in range(self.No,self.No2 + 1) :
            if(i % 2 == 0) :
                sum = sum + i;
        
        return sum;

###############################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;
    iret = 0;

    print("Jay ganesh....");

    #Taking input From user
    print("Enter Starting Number");
    No = int(input());

    print("Enter Ending Number");
    No2 = int(input());

    #Handeling Condition if Entered Numbers are Zero or Starting Number is Greater Than Zero
    if((No < 0) or (No2 < 0) or (No > No2)) :
        print("Invalid Range");
        return;

    #Creating object of Range Class
    robj = Range(No,No2);
    #Call To Behaviour of Class
    iret = robj.SumEven();

    #Printing Obtained Output
    print("Summation of Even Number in Entered Range is : ",iret);

#Call back Method To Call Main Function
if __name__ == "__main__" :
    #Call TO Main Function
    main();