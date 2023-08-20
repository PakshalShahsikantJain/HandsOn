"""
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
"""

#######################################################################################################################3

#Class Declaration
class Character :
    #Characteristics of Class
    str = " ";
    arr = [];
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];
        self.ch = ' ';
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.str = input();

        print("Enter One Character");
        self.ch = input();

        self.arr = list(self.str);

    #Behaviour of Class To Check Entered Character is present or not
    def Check(self) :
        i = 0;

        #Logic To Check 
        while(i != len(self.arr) - 1) :
            if(self.arr[i] == self.ch) :
                break;
            i = i + 1;
        
        if(self.arr[i] == self.ch) :
            return True;
        else :
            return False;

######################################################################################3

#Main Function
def main() :
    bret = False;

    print("Jay Ganesh....");

    #Creating object of Character Class
    cobj = Character();

    #Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.Check();

    #Handeling Condition if bret = True
    if(bret == True) :
        print("Entered Character %c is Present in String"%cobj.ch);
    else :   #Handeling Condition if bret = False
        print("Entered Character %c is Not Present in String"%cobj.ch);

##########################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();