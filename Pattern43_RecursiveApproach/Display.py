"""
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
"""

####################################################################################################################################################

class Pattern :
    i = 1;      #Class Variable / Static Characteristics of Class

    #Constructor of Class
    def __init__(self,value) :
        self.ino = value;  #Instance Variable of Class
    
    #Behaviour of Class
    def Display(self) :
        if(Pattern.i > self.ino) :
            return;
        else :
            print("%d"%Pattern.i,end = "\t");
            Pattern.i = Pattern.i + 1;
            
            #Recursive Call
            self.Display();

############################################################################################################################################

#Main Function
def main() :
    ino = 0;

    print("Jay Ganesh.....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());

    #Creating Object of Pattern Class
    pobj = Pattern(ino);

    #Call To Behaviour of Class
    pobj.Display();

    #Deallocating Memory of Object Created
    del(pobj);
    pobj = None;

###############################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :

    #Call To Main Function
    main();