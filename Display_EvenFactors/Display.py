"""
    Auhtor : Pakshal Jain
    Date : 20/09/2022
    Program : To Even Factors of Gven Number
"""

#########################################################################################################

#Class Declaration
class EvenFact :
    #Characteristics of Class
    No = 0;
    
    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    #Behaviour of Class
    def Display(self) :
        i = 0;
        for i in range(1,self.No + 1) :
            if((self.No % i == 0)and(i % 2 == 0)) :
                print(i,end = " ");
        
def main() :
    No = 0;

    print("Jay ganesh....");
    
    print("Enter One Number...");
    No = int(input());

    #Creating object of Class
    eobj = EvenFact(No);
    #Calling Behaviour of Class
    eobj.Display();    

if __name__ == "__main__" :
    main();