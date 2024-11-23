"""
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
"""

###############################################################################################

class Pattern :
    ino = 0;

    #Constructor of Class
    def __init__(self,value) :
        self.ino = value;   #Instance Variable of class

    #Behaviour of Class To Display Pattern
    def Display(self) :  
        if(self.ino < 1) :
            return;
        else :
            print("%d"%self.ino,end = "\t");
            self.ino = self.ino - 1;
            self.Display();

###############################################################################################

#Main Function
def main() :
    ino = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Any One Number You Want : ");
    ino = int(input());

    #Call To Pattern Function
    pobj = Pattern(ino);

    print("Output : ");

    #Call To Behaviour of Class
    pobj.Display();

##############################################################################################

#Call Back Method To Call Main Function(Enter Point Function)
if __name__ == "__main__" :
    #Call To Main Function
    main();