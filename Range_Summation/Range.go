/*
	Author : Pakshal Jain
	Date : 22/11/2022
	Program : To Calcualte Summation of Numbers in Entered Range
*/

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation
func Summation(No int,No2 int) int {
	var i int = 0;
	var sum int = 0;

	for i = No;i <= No2;i++ {
		sum = sum + i;
	}

	return sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	fmt.Println("Enter Starting Number");
	fmt.Scan(&No);

	fmt.Println("Enter Ending Number");
	fmt.Scan(&No2);

	//Handeling Condition if Entered Numbers is Negative
	if No < 0 || No2 < 0 {
		fmt.Println("Invlaid Range");
		return;
	} else if No > No2 { //Handeling Condition if Entered Starting Number is Greater Than Ending Number
		fmt.Println("Invalid Range");
		return;
	}	

	//Call To Summation Function
	iret = Summation(No,No2);

	//Printing Obtained output
	fmt.Println("Summation of Numbers in Entered Range is :",iret);
}