"""
    Author : Pakshal Jain
    Date : 06/10/2022
    Program : To Calculate Difference Between Summation of Nonfactors and Factors of Entered Number
"""

#Class Declaration
class Difference :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    
    #Behaviour of Class
    def FactDiff(self) :
        i = 0;
        sum = 0;
        sum2 = 0;
        diff = 0;
        
        #Logic
        for i in range(1,self.No) :
            if(self.No % i == 0) :
                sum = sum + i;
            elif(self.No % i != 0) :
                sum2 = sum2 + i;

        diff = sum - sum2;

        return diff;

def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    print("Enter One Number...");
    No = int(input());

    #Creating Object of Differnce
    dobj = Difference(No);

    #Call To Behaviour of Class
    iret = dobj.FactDiff();
    print("Difference Between Summation of Factors and Nonfactors of Entered Number is :",iret);

if __name__ == "__main__" :
    #Call To Main Function
    main();