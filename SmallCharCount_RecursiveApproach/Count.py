"""
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
"""

#############################################################################################################################################

class String :
    #Characteristics of Class 
    i = 0;

    #Constructor of Class
    def __init__(self,svalue) :
        self.str = svalue;
        self.icnt = 0;

    #Behaviour of Class To Count Small Characters
    def Count(self) :
        arr = [];

        arr = list(self.str);

        #Logic
        if(String.i != len(arr)) :
            if((arr[String.i] >= 'a')and(arr[String.i] <= 'z')) :
                self.icnt = self.icnt + 1;
            String.i = String.i + 1;
            self.Count();

        return self.icnt;

##############################################################################################################################################

#Main Function
def main() :
    iret = 0;
    Str = ' ';

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One String : ");
    Str = input();

    #Creating Object of String Class
    sobj = String(Str);

    #Call To Behaviour of Class
    iret = sobj.Count();

    #Printin Count Calculated
    print("Count of Small Characters in Entered String %s is : %d"%(Str,iret));

###################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();