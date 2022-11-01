"""
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequency of Even Digits in Entered Number
"""

#Class Declaration
class Frequency :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Count(self) :
        Digit = 0;
        icnt = 0;

        #Logic
        while(self.No != 0) :
            Digit = self.No % 10;
            if(Digit % 2 == 0) :
                icnt = icnt + 1;
            self.No = self.No // 10;
        
        return icnt;

#################################################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Creating object of Frequecy Class
    fobj = Frequency(No);
    #Call To Behaviour of Class
    iret = fobj.Count();

    #Printing Frequency of Class
    print("Count of Freqency of Even Digits is :",iret);

##########################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();