"""
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11
              
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
"""

#Class Declaration
class FindLast :
    #Characteristics of Class
    str = " ";
    arr = [];
    ch = ' ';

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];
        self.ch = ' ';
    
    #Behaviour of Class To Take input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.str = input();

        #Taking Character Input from user
        print("Enter One Character");
        self.ch = input();

        #Converting String To Character Array 
        self.arr = list(self.str);

    #Behaviour of Class To Find LastOcc of Entered Character
    def LastOcc(self) :
        i = 0;
        ipos = -1;

        #Logic To Find LastOccurance of Entered Character
        while(i != len(self.arr)) :
            if(self.arr[i] == self.ch) :
                ipos = i;
            i = i + 1;

        return ipos;

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");
    
    #Creating object of FindLast Class
    fobj = FindLast();

    #Call To Behaviours of Class
    fobj.Accept();
    iret = fobj.LastOcc();

    #Printing Last Occurance of Entered Character
    print("Last Occurance of Entered Character %c is at Entered Number : %d"%(fobj.ch,iret));

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();