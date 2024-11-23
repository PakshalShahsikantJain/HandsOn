"""
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

"""

#########################################################################################################################################

#Class Declaration
class StringCopy :
    #Characateristics of Class
    str = " ";
    arr = [];
    brr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.str = input();

        self.arr = list(self.str);
    
    #Behaviour of Class To Copy String After Removing White Spaces
    def StrCpyX(self) :
        i = 0;

        if((self.brr == None)and(self.brr == None)) :
            return;
        
        #Logic To Remove
        while(i != len(self.arr)) :
            if(self.arr[i] == ' ') :
                while((self.arr[i] == ' ')and(i != len(self.arr))) :
                    i = i + 1;
                self.brr.append(' ');
            
            self.brr.append(self.arr[i]);
            i = i + 1;

#######################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of StringCopy Class
    sobj = StringCopy();

    #Call To Behaviours of Class
    sobj.Accept();
    sobj.StrCpyX();

    #Printing Copied String
    print("Copied String After Removing White Spaces is : ","".join(sobj.brr));

################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();