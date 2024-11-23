"""
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Height and Width from user and Calculate Area of Circle
"""

###################################################################################################################

#Function To Calculate Area of Circle
def Calculate(Height,Width) :
    area = 0.0;

    area = Height * Width;

    return area;

#####################################################################################################################

def main() :
    Height = 0.0;
    Width = 0.0;
    fret = 0.0;

    print("Jay Ganesh...");

    #Taking Input From user
    print("Enter Height of Rectangle");
    Height = float(input());

    print("Enter Width of Rectangle");
    Width = float(input());

    #Call To Calculate Function
    fret = Calculate(Height,Width);

    #Printing Area of Rectangle
    print("Area of Rectangle is : ",fret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();