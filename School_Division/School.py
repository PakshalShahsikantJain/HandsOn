"""
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
"""

########################################################################################################################################################

#Class Declaration
class Division :
    #Characteristics of Class
    ch = ' ';
    Ascii = 0;

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';
        self.Ascii = 0;

    #Behaviour of Class To Take input from user
    def Accept(self) :
        print("Enter Your Division To Get Exam Timing");
        self.ch = input();
    
    #Behaviour of Class To Display Exam Timing According To Division
    def Display(self) :

        #Logic 
        if((self.ch >= 'a')and(self.ch <= 'z')) :
            self.Ascii = ord(self.ch) - 32;
            self.ch = chr(self.Ascii);
        
        if(self.ch == 'A') :
            print("Your Exam is at 7 AM");
        elif(self.ch == 'B') :
            print("Your Exam is at 8:30 AM");
        elif(self.ch == 'C') :
            print("Your Exam is at 9:20 AM");
        elif(self.ch == 'D') :
            print("Your Exam is at 10:30 AM");
        else :
            print("Invalid Division");

######################################################################################################################################################

#Main function
def main() :
    print("Jay Ganesh..............");

    #Creating object of Division Class 
    dobj = Division();

    #Call To Behaviour of Class
    dobj.Accept();
    dobj.Display();

##################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();