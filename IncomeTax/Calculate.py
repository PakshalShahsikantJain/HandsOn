"""
    Author : Pakshal Shashikant Jain 
    Date : 02/06/2023
    Program : Design application for income tax department to calculate tax
              amount. According to the income tax department there is no
              income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.
              If income is in between 10 to 20 lakhs then there will be 20%
              tax.

              And for more than 20 lakhs there will be 30% tax.
              We have t0o accept gross income from user and return the tax
              amount. 

"""

#############################################################################################################################################

#Class To Calculate Tax Amount 
class IncomeTax :
    #Characateristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def TaxCalc(self) :
        ans = 0.0;

        #Handeling Condition if Income is Less than 5L
        if(self.No < 500000) :
            return ans;
        #Handeling Condition if Income is in Between 5L and 10L
        elif((self.No >= 500000)and(self.No < 1000000)) :
            ans = (self.No * 10) / 100;

            return ans;
        #Handeling Condition if Income is in Between 10L and 20L
        elif((self.No >= 1000000)and(self.No <= 2000000)) :
            ans = (self.No * 20) / 100;

            return ans;
        #Handeling Condition if Income is Greater Than 20L
        else :
            ans = (self.No * 30) / 100;

            return ans;

###################################################################################################################################

#Main function
def main() :
    No = 0;
    fret = 0.0;

    print("Jay Ganesh.....");

    print("-------Marvellous Income Tax Calculator--------");
    
    #Taking input From User
    print("Enter Your Gross Income...");
    No = int(input());

    #Creating object of IncomeTax 
    iobj = IncomeTax(No);

    #Call To Behaviour of Class
    fret = iobj.TaxCalc();

    #Printing Income Tax Calculated
    print("You Have To Pay Taxable Amount of %.1f ₹"%fret);

#####################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #call To Main Function
    main();