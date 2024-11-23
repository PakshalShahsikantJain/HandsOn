"""
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE 
"""

################################################################################################################################################

#Class Declaration
class Character :
    #Characteristisc of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class TO Take input from  user
    def Accept(self) :
        print("Enter One Character To Check");
        self.ch = input();

    #Behaviour of Class To Check Entered Character is Small Case Character or not
    def Check(self) :
        if((self.ch >= 'a')and(self.ch <= 'z')) :
            return True;
        else :
            return False;

######################################################################################################################################

#Main function
def main() :
    bret = False;

    print("Jay Ganesh....");

    #Creating object Character Class
    cobj = Character();

    #Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.Check();

    #Handeling Conditions according to output
    if(bret == True) :
        print("Entered Character %c is Small Case Character"%cobj.ch);
    else :
        print("Entered Character %c is Not Small Case Character"%cobj.ch);

#################################################################################################################################################

#Call back Method To Call Main function
if __name__ == "__main__" :
    #Call TO main function
    main();