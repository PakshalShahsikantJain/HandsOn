"""
    Author : Pakshal Jain 
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
"""

##########################################################################################################################################33

#Class Declaration
class CopyString :
    #Characteristics of Class
    arr = [];
    brr = [];
    str = " ";

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];
        self.brr = [];
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Ente One String");
        self.str = input();

        #Creating Character Array of Entered String
        self.arr = list(self.str);
    
    #Behaviour of Class To Copy String After Removing white Spaces
    def StrCpyX(self) :
        i = 0;

        #Logic To Copy String
        while i != len(self.arr) :
            if(self.arr[i] != ' '):
                self.brr.append(self.arr[i]);
            i = i + 1;

##########################################################################################################################################3

#Main Function
def main() :
    print("Jay Ganesh.....");

    #Creating object of CopyString Class
    cobj = CopyString();

    #Call To Behaviours of Class
    cobj.Accept();
    cobj.StrCpyX();

    #Printing Copied String After Removing White Spaces
    print("String Copied After Removing White Spaces is :","".join(cobj.brr));

#################################################################################################################################################################3

#Call Back Method to Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main()