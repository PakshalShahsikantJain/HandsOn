"""
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Radius From User and Calculate Area Of Circle
"""

####################################################################################################################################

#Class Declaration
class CircleArea :
    #Characteristics of Class
    No = 0.0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Calculate(self) :
        area = 0.0;

        area = 3.14 * self.No * self.No;

        return area;

#######################################################################################################################

#Main Function    
def main() :
    No = 0.0;
    fret = 0.0;

    print("Jay Ganesh...");
    
    #Taking Input From User
    print("Enter Radius of Circle");
    No = float(input());

    #Creating object of CircleArea Class
    cobj = CircleArea(No);
    #Call To Behaviour of Class
    fret = cobj.Calculate();

    print("Area of Circle is : ",fret);

##################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();