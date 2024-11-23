/*
	Author : Pakshal Jain
	Date : 15/10/2022
	Program : To Print Digits of Entered NUmber in Reverse Order
*/

//Requried Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Digits in Reverse Order
func Display(No int) {
	var Digit int = 0;

	fmt.Println("Printing Digits of Number in Reverse Order");
	
	//Logic To Display Digits in Reverser Order
	for No != 0 {
		Digit = No % 10;
		fmt.Println(Digit);
		No = No / 10;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter Any Number of Two or more Digit");
	fmt.Scanf("%d",&No);

	//Calling Dispaly Function
	Display(No);
}