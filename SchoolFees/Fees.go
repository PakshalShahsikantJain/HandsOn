/*
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
*/

//Required Libraries
package main 
import (
	"fmt"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Fees According To Output 
func SchoolFee(No int) int {
	var fee int = 0;

	//Logic To Print Output According To Standard
	switch (No) {
		case 1 :
			fee = 8900;
			return fee;
		case 2 :
			fee = 12790;
			return fee;
		case 3 :
			fee = 21000;
			return fee;
		case 4 : 
			fee = 23450;
			return fee;
		default :
			fmt.Println("Invalid Input");
			os.Exit(0);
	}

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	fmt.Println("---------Marvellous International Primary School------------");

	//Taking Input From User
	fmt.Println("Enter Your Standard..");
	fmt.Scanf("%d",&No);

	//Call To SchoolFee Function
	iret = SchoolFee(No);

	fmt.Println("Your Fees is :",iret);
}