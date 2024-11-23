"""
    Author : Pakshal Jain
    Date : 28/09/2022
    Program : To Check Entered Character is Vowel or Not
"""
###################################################################################################################################

#Class Declaration
class Check :
    #Characteristics of Class
    ch = ' ';
    #Constructor of Class
    def __init__(self,c) :
        self.ch = c;
    #Behaviour of Class
    def check(self) :
        #Logic To Check Entered Character is Vowel or not
        if((self.ch == 'a')or(self.ch == 'e')or(self.ch == 'i')or(self.ch == 'o')or(self.ch == 'u')) :
            return True;
        elif((self.ch == 'A')or(self.ch == 'E')or(self.ch == 'I')or(self.ch == 'O')or(self.ch == 'U')) :
            return True;
        else :
            return False;

#############################################################################################################################

def main() :
    ch = ' ';
    bret = False;

    print("Jay Ganesh...");

    print("Enter One Character...");

    ch = input();
    #Creating object of Class
    cobj = Check(ch);
    #Calling Behaviour of Class
    bret = cobj.check();

    if(bret == True) :
        print("Entered Character",ch,"is a Vowel");
    else :
        print("Entered Character",ch,"is Not a Vowel");

#############################################################################################################################3

#Call Back Method
if __name__ == "__main__" :
    #Call To Main function
    main();