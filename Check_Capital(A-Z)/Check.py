"""
    Author : Pakshal Shashikant Jain 
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE 
"""

##############################################################################################################################################################

#Class Declaration
class Character :
    #Characterstics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class to Take input from user
    def Accept(self) :
        print("Enter One Character You Want To Check");
        self.ch = input();
    
    def check(self) :
        #Logic
        if((self.ch >= 'A')and(self.ch <= 'Z')) :
            return True;
        else :
            return False;

############################################################################################################################################################

#Main Function
def main() :
    bret = False;

    print("Jay Ganesh.....");

    #Creating object of Character 
    cobj = Character();

    #Call To Behaviours of Class
    cobj.Accept();
    bret = cobj.check();

    #Handeling Conditions of According To Output
    if(bret == True) :
        print("Entered Character %c is Captial"%cobj.ch);
    else :
        print("Entered Character %c is Not Capital"%cobj.ch);

#Call Back Method To Call To main Function
if __name__ == "__main__" :
    #Call To main function
    main();