"""
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : “Marvellous”
              Output : 9  
"""

#######################################################################################################

#Class Declaration
class SmallLetter :
    #Characteristics of Class
    str = " ";
    arr = [];

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
    
    #Behaviour of Class To Count Small Letters
    def Count(self) :
        i = 0;
        icnt = 0;

        #Logic To Count 
        for i in range(len(self.arr)) :
            if((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
                icnt = icnt + 1;
        
        return icnt;
            
###################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of SmallLetter Class
    cobj = SmallLetter();

    #Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();

    #Printing Count Calculated
    print("Count of Small letter in Entered String (%s) is %d"%(cobj.str,iret));
    
##########################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();