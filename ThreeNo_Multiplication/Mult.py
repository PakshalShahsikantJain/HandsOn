"""
    Author : Pakshal Jain
    Date : 12/10/2022
    Program : To Calcualte Multiplication of Entered Three Numbers
"""

#####################################################################################################################################

#Class Declaration
class Calculate :

    #Characteristics of Class
    No = 0;
    No2 = 0;
    No3 = 0;
    
    #Constructor of Class
    def __init__(self,no,no2,no3) :
        self.No = no;
        self.No2 = no2;
        self.No3 = no3;
    
    #Behaviour of Class
    def Multi(self) :
        ans = 0;

        #Handeling Condition If any of The Entered Number is Zero
        if((self.No == 0)and(self.No2 == 0)) :
            ans = self.No3;
        elif((self.No2 == 0)and(self.No3 == 0)) :
            ans = self.No;
        elif((self.No == 0)and(self.No3 == 0)) :
            ans = self.No2;
        elif(self.No == 0) :
            ans = self.No2 * self.No3;
        elif(self.No2 == 0) :
            ans = self.No * self.No3;
        elif(self.No3 == 0) :
            ans = self.No * self.No2;
        #Handeling Condition if Any of The Entered Number is Not Zero
        else :
            ans = self.No * self.No2 * self.No3;
        
        return ans;

#################################################################################################################################################

def main() :
    No = 0;
    No2 = 0;
    No3 = 0;
    iret = 0;

    print("Jay Ganesh...");

    print("Enter First Number");
    No = int(input());

    print("Enter Second Number");
    No2 = int(input());

    print("Enter Third Number");
    No3 = int(input());

    #Creating object of Calculate Class
    cobj = Calculate(No,No2,No3);

    if((No == 0)and(No2 == 0)and(No3 == 0)) :
        iret = No * No2 * No3;
    else :
        #Calling Behaviour of Class
        iret = cobj.Multi();

    #Printing Final Output    
    print("Multiplication of Three Numebers is : ",iret);

############################################################################################################################################

if __name__ == "__main__" :
    #Calling Main Function
    main();