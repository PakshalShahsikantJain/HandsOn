"""
    Author : Pakshal Shashikant Jain 
    Date : 05/06/2023
    Program : We have to design application for tourist company.
              Tourist company provides cars on rent.
              Depends on the running of car they apply rent.
              
              If running is less than 100 kilometres then they charge 25
              rupees per kilometre .
              
              And if running is more than 100 kilometres then they apply 15
              rupees per kilometre after 100 kilometres.
    
              We have to accept number of kilometres from user and return
              the estimated rent.
            
              Input : 73 Output : 1825
              Input : 132 Output : 2980
              Input : 189 Output : 3835  
"""

#########################################################################################################################333333

#Function To Calculate Car Rent
def CarRent(No) :
    rent = 0;

    #Handeling Condition if Entered Runnig of Car is in Negative Value 
    if(No < 0) :
        No = -No;

    #logic To Calculate Rent 
    if(No <= 100) :
        rent = No * 25;

        return rent;
    else :
        rent = No * 15;
        
        return  rent;

#############################################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh.....");

    print("-------Marvellous Car Rental Services----------");
    
    #Taking Input From User
    print("Enter Running of Car in KM");
    No = int(input());

    #Call To CarRent Function
    iret = CarRent(No);

    print("You Have To Car Rent of %d"%iret);

#######################################################################################################################

#Call Back Method To Call Main Fuction
if __name__ == "__main__" :
    #Call To Main Function
    main();