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

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Car Rent 
func CarRent(No int) int {
	var rent int = 0;

	//Handeling Condition if Entered Runnig of Car is Less Than 100
	if (No < 0) {
		No = -No;
	}

	//Logic To Calculate Car Rent According To Running of Car
	if (No <= 100) {
		rent = No * 25;

		return rent;
	} else {
		rent = No * 15;

		return rent;
	}
}

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Ganapati Bappa Morya...");

	fmt.Println("--------Marvellous Car Rental Services------------");
	//Taking Input from user
	fmt.Println("Enter Your Running of Car");
	fmt.Scan(&No);

	//Call To Car Rent Function
	iret = CarRent(No);
	fmt.Printf("You Have To Pay Car Rent of %d INR",iret);
}