"""
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
"""

#####################################################################################################################################################3333

class Toggle :
    #Characteristics of Class    
    arr = [];
    str = " ";

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.str = " ";
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter String");
        self.str = input();

        self.arr = list(self.str);
    
    #Behaviour of Class To Modify String 
    def Modify(self) :
        i = 0;
        ascii = 0;

        #Logic To Modify String 
        while(i != len(self.arr)) :
            if((self.arr[i] >= 'A')and(self.arr[i] <= 'Z')) :
                ascii = ord(self.arr[i]) + 32;

                self.arr[i] = chr(ascii);
            elif((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
                ascii = ord(self.arr[i]) - 32;

                self.arr[i] = chr(ascii);
            i = i + 1;

#######################################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh.....");

    #Creating object of Toggle Class
    tobj = Toggle();

    #Call To Behaviour of Class 
    tobj.Accept();
    tobj.Modify();

    #Printing Modified
    print("Modified String is : ","".join(tobj.arr));

################################################################################################################################################

#Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();