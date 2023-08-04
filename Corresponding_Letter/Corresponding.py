"""
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4        
              Output : 4

              Input : %
              Output : % 
"""

###############################################################################################################

#Class Declaration
class Corresponding :
    ch = ' ';
    Ascii = 0;

    #Constructor of Class
    def __init__(self,CH) :
        self.ch = CH;

    #Behaviour of Class To Convert Character
    def Convert(self) :
        if((self.ch >= 'a')and(self.ch <= 'z')) :
            Ascii = ord(self.ch) - 32;

            return chr(Ascii);
        elif((self.ch >= 'A')and(self.ch <= 'Z')) :
            Ascii = ord(self.ch) + 32;

            return chr(Ascii);
        else :
            return self.ch;

##########################################################################################################################33

#Main Function
def main() :
    ch = ' ';
    cret = ' ';

    print("Jay Ganesh.....");

    #Enter One Character
    print("Enter One Character");
    ch = input();

    #Creating object of Corresponding Class 
    cobj = Corresponding(ch);

    #Call To Behaviour of Class
    cret = cobj.Convert();

    #Logic 
    if((ch >= 'a')and(ch <= 'z')) :
        print("Correspoding Capital Letter of Entered Small Letter %c is : %c"%(ch,cret));
    elif((ch >= 'A')and(ch <= 'Z')) :
        print("Correspoding Small Letter of Entered Capital Letter %c is : %c"%(ch,cret));
    else :
        print("There is No Corresponding Letter for Entered Character %c "%cret);

#########################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();