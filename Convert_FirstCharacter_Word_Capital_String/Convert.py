"""
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
"""

################################################################################################################################################################

#Class Declaration
class Convert :
    #Characteristics of Class
    arr = [];
    Str = " ";

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.Str = " ";

    #Behaviour of Class
    def Accept(self) :
        #Taking Input from user
        print("Enter One String...");
        self.Str = input();

        self.arr = list(self.Str);
    
    #Behaviour of Class To Convert Case of First Character of Word Present in Entered String
    def StrCapCpy(self) : 
        i = 0;
        ascii = 0;


        #Logic To Convert
        if(self.arr == None) :
            return;
        
        if((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
            ascii = ord(self.arr[i]) - 32;
            self.arr[i] = chr(ascii);
        
        while(i != len(self.arr)) :
            if(self.arr[i] == ' ') :
                while((self.arr[i] == ' ')and(i != len(self.arr))) :
                    i = i + 1;
                if((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
                    ascii = ord(self.arr[i]) - 32;
                    self.arr[i] = chr(ascii);
            i = i + 1;

#############################################################################################################################################

#Main Function
def main() :
    print("Ganapati Bappa Morya....");

    #Creating object of Convert Clawss
    cobj = Convert();
    cobj.Accept();
    cobj.StrCapCpy();

    #Printing Modified String
    print("Modified String is : ","".join(cobj.arr));

#############################################################################################################################################

#Call Back Method to Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();