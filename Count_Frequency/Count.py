"""
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To count Frequency of Two in Entered Number
"""
#################################################################################
#Class Declaration
class Frequency :
    #Characteristics of Class
    No = 0; 
    icnt = 0;   

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    #Behaviour of Class
    def count(self) :
        Digit = 0;

        #Logic To Count Frequency of Two in Entered Number 
        while(self.No != 0) :
            Digit = self.No % 10;

            if(Digit == 2) :
                self.icnt = self.icnt + 1;

            self.No = self.No // 10;
        
        return self.icnt;

#########################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...."); 
    
    #Taking inoput From user
    print("Enter Number");
    No = int(input());

    #Creating Object of Frequency Class
    fobj = Frequency(No);
    #Calling Behaviour of Class
    iret = fobj.count();

    #Printing Frequecny of Two Present in Entered Number 
    print("Frequency of Two in Entered Number is : ",iret);

#######################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();