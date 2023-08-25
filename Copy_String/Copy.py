"""
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : “Marvellous Multi OS”
              Output : “Marvellous Multi OS” in another string 
"""

############################################################################################################################################################

#Class Declaration
class CopyString :

    #Characteristics of Class
    Str = " ";
    arr = [];
    brr = [];

    #Constructor of Class
    def __init__(self) :
        self.Str = " ";
        self.arr = [];
        self.brr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        self.arr = list(self.Str);

    #Behaviour of Class TO Copy String
    def StrCpyX(self) :
        i = 0;

        #Logic To Copy String
        while(i < len(self.arr)) :
            self.brr.append(self.arr[i]);
            i = i + 1;

########################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyString Class
    cobj = CopyString();

    #Call To Behaviour of Class
    cobj.Accept();
    cobj.StrCpyX();

    #Printing Copied String
    print("Second String After Copying Contents of Entered String is : %s"%"".join(cobj.brr));

#############################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();