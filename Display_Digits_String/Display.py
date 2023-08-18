""" 
    Author : Pakshal Shashikant Jain 
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : “marve89llous121”
              Output : 89121
              Input : “Demo”
"""

#############################################################################################################################################

#Class Declaration
class StrDigits :
    #Characteristics of Class
    arr = [];
    str = " ";

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter String");
        self.str = input();

        self.arr = list(self.str);

    #Behaviour of Class To Display Digits Present in Entered String 
    def Display(self) :
        i = 0;

        #Printing Digits 
        print("Printing Digits Which are Present in Entered String : ");
        while(i != len(self.arr)) :
            if((self.arr[i] >= '0')and(self.arr[i] <= '9')) :
                print(self.arr[i],end = "");
            i = i + 1;

###########################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh.....");

    #Creating object of StrDigits Class
    sobj = StrDigits();

    #Call To Behaviour of Class
    sobj.Accept();
    sobj.Display();

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();