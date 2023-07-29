"""
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
"""

##########################################################################################################################################################

#Class Declartion
class Character :
    #Characteristics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        print("Enter One Character To Check");
        self.ch = input();
    
    #Behaviour of Class To Check Entered Chracter is Alphabet or not
    def Check(self) :
        if((self.ch >= 'A')and(self.ch <= 'Z')or(self.ch >= 'a')and(self.ch <= 'z')) :
            return True;
        else :
            return False;

##########################################################################################################################################

#Main function
def main() :
    cret = ' ';

    print("Jay Ganesh.....");

    #Creating object of Charcater Class
    cobj = Character();
    cobj.Accept();

    #Call To Behaviour of Class
    cret = cobj.Check();

    #Handeling Conditions
    if(cret == True) :
        print("Entered Character %c is an Alphabet"%cobj.ch);
    else :
        print("Entered Character %c is not an Alphabet"%cobj.ch);

############################################################################################################################################

#Call Back Method TO Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();