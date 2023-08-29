"""
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by toggling the case.

              Input : "Marvellous Python 2"
              Output : "mARVELLOUS pYTHON 2"  
"""

#####################################################################################################################################################

#Class Declaration
class CopyString :
    #Characteristics of Class
    src = [];
    dest = [];
    Str = " ";

    #Constructor of Class
    def __init__(self) :
        self.src = [];
        self.dest = [];
        self.Str = " ";
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        self.src = list(self.Str);
    
    #Behaviour of Class to Copy String after Toggling Case into another String
    def StrCpyToggle(self) :
        i = 0;
        ascii = 0;

        if((self.src == None)and(self.dest == None)) :
            return;

        #Logic To Copy
        while(i != len(self.src)) :
            if((self.src[i] >= 'A')and(self.src[i] <= 'Z')) :
                ascii = ord(self.src[i]) + 32;
                self.src[i] = chr(ascii);

            elif((self.src[i] >= 'a')and(self.src[i] <= 'z')) :
                ascii = ord(self.src[i]) - 32;
                self.src[i] = chr(ascii);
            
            self.dest.append(self.src[i]);
            i = i + 1;

#####################################################################################################################################################
        
#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyString 
    cobj = CopyString();
    #Call To Behaviour of Class
    cobj.Accept();
    cobj.StrCpyToggle();

    #Printing Copied String
    print("String Copied After Toggling Case is : %s"%"".join(cobj.dest));

######################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();