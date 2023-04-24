"""
    Author : Pakshal Shashikant Jain 
    Date : 20/04/2023
    Program : Design application for hotel. According to the management
              team of hotel they are giving discount on total bill amount of
              customer.
              If bill bill amount is less than 500 then there is no discount , if
              bill amount is less than 1500 and more than 500 they give 10%
              discount.
              And if the bill amount is more than 1500 then they give 15%
              discount.
              Our application should accept total bill amount and depends on
              the discount policy we have to return the amount after applying
              discount.

              Input : 1200 Output : 1080
              Input : 290 Output : 290
              Input : 3700 Output : 3145 
"""

#Class Declaration
class Hotel :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self) :
        self.No = 0;

    #Behaviour of Class To Take Input From User
    def Accept(self) :
        print("Enter Your Bill Amount");
        self.No = int(input());

        return self.No;
    
    #Behaviour of Class To Calculate Discount 
    def Calculate(self) :
        Discount = 0;
        Final = 0;

        #Logic To Caculate Discount 
        if(self.No < 500) :
            return self.No;
        elif((self.No >= 500)and(self.No <= 1500)) :
            Discount = (self.No * 10) // 100;

            Final = self.No - Discount;

            return Final;
        elif(self.No > 1500) :
            Discount = (self.No * 15) // 100;

            Final = self.No - Discount;

            return Final;

################################################################################################################################

#Main Function
def main() :
    iret = 0;
    iret2 = 0;

    print("Ganapti Bappa Morya...");

    print("-----------Welocme To TCS Hotel--------------");

    #Creating object of Hotel Class
    hobj = Hotel();

    #Call To Behaviours of Class
    iret = hobj.Accept();
    iret2 = hobj.Calculate();

    #Displaying Output According To Given Conditions 
    if(iret < 500) :
        print("Your Final Bill Amount Accrding To Our Discount Policy is : %d₹"%iret2);
    elif((iret >= 500)and(iret <= 1500)) :
        print("Your Final Bill Amount After Getting 10%% Discount is : %d₹"%iret2);
    elif(iret > 1500) :
        print("Your Final Bill Amount After Getting 15%% Discount is : %d₹"%iret2);

#######################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();