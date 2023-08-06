"""
    Author : Pakshal Shashikant Jain 
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE 
"""
#############################################################################################################################3

#Class Declaration
class Scharacter :

    #Characteristics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class To Take input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One Character To Check");
        self.ch = input();

    #Behaviour of Class To Check Entered Character is Special or not
    def check(self) :

        #Logic To Check
        if((self.ch >= '#')and(self.ch <= '&')) :
            return True;
        elif((self.ch == '!')or(self.ch == '@')or(self.ch == '^')or(self.ch == '*')) :
            return True;
        else :
            return False;

#############################################################################################################################

#Main function
def main() :
    bret = False;

    print("Jay ganesh......");

    #Creating object of Scharacter Class
    sobj = Scharacter();

    #Call To Behaviour of Class
    sobj.Accept();
    bret = sobj.check();

    #Handeling Output According To Given Conditions
    if(bret == True) :
        print("Entered Character %c is Special Character"%sobj.ch);
    else :
        print("Entered Character %c is Not A Special Character"%sobj.ch);

###################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();