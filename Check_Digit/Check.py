"""
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
"""

#Class Declaration
class Character :
    #Characteristics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        print("Enter Character To Check");
        self.ch = input();

    #Behaviour of Class To Check Entered Character is Digit or not
    def check(self) :
        if((self.ch >= '0')and(self.ch <= '9')) :
            return True;
        else :
            return False;

#Main function
def main() :
    bret = False;

    print("Jay Ganesh.....");

    #Creating object of Character Class
    cobj = Character();

    #Call To Behaviour of Class
    cobj.Accept();

    bret = cobj.check();

    #Handeling Condition According To output
    if(bret == True) :
        print("Entered Character %c is Digit"%cobj.ch);
    else :
        print("Entered Character %c is Not A Digit"%cobj.ch);

#Call Back Method TO Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();