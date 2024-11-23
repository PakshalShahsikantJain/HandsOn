"""
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
"""

###########################################################################################

#Class Declaration
class StringWord :
    #Characteristics of Class
    arr = [];
    str = " ";

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        print("Enter One String");
        self.str = input();

        self.arr = list(self.str);
    
    #Behaviour of Class To Count Number of Word Present in Entered String
    def WordCount(self) :
        i = 0;
        icnt = 1;

        if(self.arr == None) :
            return -1;

        #Logic To Count
        if(self.arr[i] == ' ') :
            while(self.arr[i] == ' ') :
                i = i + 1;
        
        while(i != len(self.arr) - 1) :
            if(self.arr[i] == ' ') :
                while((self.arr[i] == ' ')and(i != len(self.arr))) :
                    i = i + 1;
                icnt = icnt + 1;
            i = i + 1;

        return icnt;

################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh.....");
    #Creating object of StringWord Class
    sobj = StringWord();

    #Call To Beahaviour of Class
    sobj.Accept();
    iret = sobj.WordCount();

    #Printing Count of Words 
    print("Count of Word in Entered String is : ",iret);

#########################################################################################################

#Call Back Method To call Main Funtion
if __name__ == "__main__" :
    #Call To Main Function
    main();