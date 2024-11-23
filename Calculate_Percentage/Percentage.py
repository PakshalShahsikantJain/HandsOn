"""
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Calculate Percentage of Entered Number
"""

#Class Declaration
class Percentage :

    #Characteristics of Class
    No = 0;
    No2 = 0.0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;
    #Behaviour of Class
    def Calculate(self) :
        ans = 0.0;

        ans = self.No2 / self.No * 100;

        return ans;

######################################################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0.0;
    fret = 0.0;

    print("Jay Ganesh.....");

    print("Enter Total Marks");
    No = int(input());

    print("Enter Obtained Marks");
    No2 = float(input());

    #Creating Object of Percentage Class
    pobj = Percentage(No,No2);
    #Call Behaviour of Class
    fret = pobj.Calculate();

    #Printing Final Output
    print("Percentage is : ",fret);

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();