"""
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
"""

#########################################################################################################################################################

#Class Declaration
class AsciiValue :
    #Characteristics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class To Take input from user
    def Accept(self) :
        print("Enter One Character : ");
        self.ch = input();
    
    #Behaviour of Class To Display Ascii Values
    def Display(self) :
        #Logic To Display 
        print("Decimal Value : %d"%ord(self.ch));
        print("HexaDecimal Value : %#X"%ord(self.ch));
        print("Octal Value : %#o"%ord(self.ch));

###################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh......");

    #Creating object of AsciiValue Class
    aobj = AsciiValue();

    #Call To Behaviour of Class
    aobj.Accept();
    aobj.Display();

############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main function
    main();