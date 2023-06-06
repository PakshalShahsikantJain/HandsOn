/*
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
*/
///////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Calculate Car Rent according To Running of Car
function CarRent(No) {
    var rent = 0;
    //Logic To Calcualte Car Rent 
    if (No <= 100) {
        rent = No * 25;
        return rent;
    }
    else {
        rent = No * 15;
        return rent;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 73;
    var iret = 0;
    console.log("Jay Ganesh.....");
    console.log("-----Marvellous Car Rental Services------");
    //Call To Car Rent Function
    iret = CarRent(No);
    //Printing Rent Calculated
    console.log("You Have To Pay Car Rent of : %d₹", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
