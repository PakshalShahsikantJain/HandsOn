"""
    Author : Pakshal Shashikant Jain 
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output : 
"""

############################################################################################################################################

#Class Declaration
class Alphabets :
    #Characteristics of Class
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';

    #Behaviour of Class To Take input from user
    def Accept(self) :
        print("Enter One Alphabet To Print Alphabets According To Given Conditions");
        self.ch = input();

    #Behaviour of Class to Display Alphabets According To Given Conditions
    def Display(self) :
        i = 0;

        #Logic To Print Alphabets
        print("Printing Alphabets According To Given Conditions");
        if((self.ch >= 'A')and(self.ch <= 'Z')) :
            for i in range(ord(self.ch),ord('Z') + 1,1) :
                print(chr(i),end = " ");
        elif((self.ch >= 'a')and(self.ch <= 'z')) :
            for i in range(ord(self.ch),ord('a') - 1,-1) :
                print(chr(i),end = " ");
        else :
            return;

###################################################################################################################################

#Main Function            
def main() :
    print("Jay Ganesh......");

    #Creating object of Alphabets Class To Take input from user
    aobj = Alphabets();

    #Call To Behaviour of Class
    aobj.Accept();
    aobj.Display();

#########################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();