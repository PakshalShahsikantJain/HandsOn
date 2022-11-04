/*
	Auhtor : Pakshal Jain
	Date : 04/11/2022
	Program : To Print Numberes Between Entered Range
*/

//Required librariess
package main
import "fmt";

//Function TO Display Number
func Display(No int,No2 int) {
	var i int = 0;
	
	//Handeling Condition if Starting Number is Greater Than Ending Number
	if No > No2 {
		fmt.Println("Invalid Range");

		return;
	}
	
	//logic
	fmt.Println("Printing Numbers Between Entered Range");
	for i = No;i <= No2;i++ {
		fmt.Printf("%d\t",i);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay ganesh...");

	//Taking Input From User
	fmt.Println("Enter Starting Number..");
	fmt.Scan(&No);

	fmt.Println("Enter Ending Number..");
	fmt.Scan(&No2);

	//Call To Display Function
	Display(No,No2);
}