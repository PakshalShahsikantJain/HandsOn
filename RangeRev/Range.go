/*
	Author : Pakshal jain
	Date : 12/12/2022
	Program : To Display Entered Range in Reverse Order
*/

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Entered Range in Reverse Order
func Range(No int,No2 int) {
	var i int = 0;

	fmt.Println("Printing Numbers of Entered Range in Reverse Order");
	for i = No2;i >= No;i-- {
		fmt.Print(i,"\t");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh..");

	//Taking Input From User
	fmt.Println("Enter Starting Number");
	fmt.Scan(&No);

	fmt.Println("Enter Ending Number");
	fmt.Scan(&No2);

	//Handeling Condition if Number is Negative or Starting Number is Greter than Ending Number
	if No < 0 || No > No2 {
		fmt.Println("Invalid Range");

		return;
	}

	//Call To Range Function
	Range(No,No2);
}