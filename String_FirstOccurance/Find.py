"""
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
"""

#Class Declaration
class CharFind :

    #Characteristics of Class
    Str = " ";
    ch = ' ';
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.Str = " ";
        self.ch = ' ';
        self.arr = [];
    
    #Behaviour of Class To Take input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        print("Enter One Character");
        self.ch = input();

        self.arr = list(self.Str);
    
    #Behaviour of Class To Find FirstOccurance of Entered Character
    def FirstOcc(self) :
        i = 0;  

        #Logic To Find
        while(i != len(self.Str) - 1) :
            if(self.arr[i] == self.ch) :
                break;
            i = i + 1;

        if(self.arr[i] == self.ch) :
            return i;
        else :
            return -1;
        
#########################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh.....");

    #Creating object of CharFind Class To Take Input from user
    cobj = CharFind();

    #Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.FirstOcc();

    #Printing First Occurance found
    print("First Occurance of Entered Character %c is at index number : %d"%(cobj.ch,iret));

####################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();