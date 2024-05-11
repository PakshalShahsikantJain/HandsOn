"""
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
"""

class String :
    #Characteristics of Class
    icnt = 0;
    str = " ";
    i = 0;

    #Constructor of Class
    def __init__(self,svalue) :
        self.str = svalue;
        self.icnt = 0;
        self.i = 0;

    #Behaviour of Class To Count Number of White Spaces in String
    def WhiteSpace(self) :
        arr = list(self.str);

        #Logic To Count
        if(self.i != len(arr)) :
            if(arr[self.i] == ' ') :
                self.icnt = self.icnt + 1;
            self.i = self.i + 1;

            self.WhiteSpace();
        
        return self.icnt;

#Main Function
def main() :
    str = " ";
    iret = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One String : ");
    str = input();

    #Creating object of String Class
    sobj = String(str);

    #Call To Behaviour of Class
    iret = sobj.WhiteSpace();

    print("Count of White Spaces in Entered String '%s' is : %d"%(str,iret));

#Call Backmethod to Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();
