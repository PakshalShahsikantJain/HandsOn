/*
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
*/

//Required Libraries
package main 
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Discount
func Discount(No int) int {
	var Discount int = 0;
	var Final int = 0;

	//Logic To Calculate Discount 
	if (No < 500) {
		return No;
	} else if ((No >= 500)&&(No <= 1500)) {
		Discount = (No * 10) / 100;
		Final = No - Discount;

		return Final;
	} else if (No > 1500) {
		Discount = (No * 15) / 100;
		Final = No - Discount;

		return Final;
	}

	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	fmt.Println("-------------Welcome To TCS Hotel-------------------");	
	
	//Taking Input From User
	fmt.Println("Enter Your Bill Amount..");
	fmt.Scanf("%d",&No);
	//Call To Discount Function
	iret = Discount(No);

	//Printing Output According To Given Conditions
	if (No < 500) {
		fmt.Printf("Your Final Bill Amount According To Discount Policy is : %d₹",iret);
	} else if ((No >= 500)&&(No <= 1500)) {
		fmt.Printf("Your Final Bill Amount After Getting 10%% Discount is : %d₹",iret);
	} else if (No > 1500) {
		fmt.Printf("Your Final Bill Amount After Getting 15%% Discount is : %d₹",iret);
	}
}