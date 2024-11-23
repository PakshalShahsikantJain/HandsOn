"""
    Author : Pakshal Shashikant Jain 
    Date : 12/08/2023
    Program : Write a program which accept string from user and convert it into
              lower case.

              Input : "Marvellous Multi OS"
              Output : marvellous multi os 
"""

#Class Declaration
class ConvertString :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.str = input();
        self.arr = list(self.str);

    #Behaviour of Class To Convert String To Lower Case
    def Convert(self) :
        i = 0;
        ascii = 0;

        if(self.arr == None) :
            return;
        
        #Logic 
        while(i != len(self.arr) - 1) :
            if((self.arr[i] >= 'A')and(self.arr[i] <= 'Z')) :
                ascii = ord(self.arr[i]) + 32;
                self.arr[i] = chr(ascii);
            i = i + 1;

####################################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object ConvertString Class
    cobj = ConvertString();

    #Call To Behaviour of Class
    cobj.Accept();
    cobj.Convert();

    #Printing Converted String
    print("Converted String is :","".join(cobj.arr));

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();